#include "pch.h"
#include "RadarModule.h"
#include "Settings.h"
#include "ActorBase.h"
namespace radar {
	FVector2D position, size;
	FVector camera_location;
	FRotator camera_rotation;

	void range(double* x, double* y, double range)
	{
		if (abs((*x)) > range || abs((*y)) > range) {
			if ((*y) > (*x)) {
				if ((*y) > -(*x)) {
					(*x) = range * (*x) / (*y);
					(*y) = range;
				}
				else {
					(*y) = -range * (*y) / (*x);
					(*x) = -range;
				}
			}
			else {
				if ((*y) > -(*x)) {
					(*y) = range * (*y) / (*x);
					(*x) = range;
				}
				else {
					(*x) = -range * (*x) / (*y);
					(*y) = -range;
				}
			}
		}
	}

	void RotatePoint(FVector2D* screen, FVector origin, FVector camera_location, FRotator camera_rotation) 
	{
		auto yaw = camera_rotation.Yaw * 3.1415927 / 180;

		double dx = origin.X - camera_location.X;
		double dy = origin.Y - camera_location.Y;

		double fsin_yaw = sin(yaw);
		double fminus_cos_yaw = -cos(yaw);

		double x = -(dy * fminus_cos_yaw + dx * fsin_yaw);
		double y = dx * fminus_cos_yaw - dy * fsin_yaw;

		double range_value = settings::radar::RadarZoom.Val * 1000;
		range(&x, &y, range_value);

		auto DrawPos = radar::position;
		auto DrawSize = radar::size;

		int rad_x = (int)DrawPos.X;
		int rad_y = (int)DrawPos.Y;

		double r_siz_x = DrawSize.X;
		double r_siz_y = DrawSize.Y;

		int x_max = (int)r_siz_x + rad_x - 5;
		int y_max = (int)r_siz_y + rad_y - 5;

		double out_screen_x = rad_x + ((int)r_siz_x / 2 + int(x / range_value * r_siz_x));
		double out_screen_y = rad_y + ((int)r_siz_y / 2 + int(y / range_value * r_siz_y));

		if (out_screen_x > x_max)
			out_screen_x = x_max;

		if (out_screen_x < rad_x)
			out_screen_x = rad_x;

		if (out_screen_y > y_max)
			out_screen_y = y_max;

		if (out_screen_y < rad_y)
			out_screen_y = rad_y;

		*screen = FVector2D(out_screen_x, out_screen_y);
	}

	void AddToRadar(FVector world_location, float PlayerSize, FLinearColor color, bool Circle) 
	{
		FVector2D screen{};
		RotatePoint(&screen, world_location, radar::camera_location, radar::camera_rotation);
		Renderer::DrawFilledRectangle({ screen.X - PlayerSize - 1,screen.Y - PlayerSize - 1 }, { screen.X + PlayerSize + 1 ,screen.Y + PlayerSize + 1 }, {0.f,0.f,0.f,1.f});
		Renderer::DrawFilledRectangle({ screen.X - PlayerSize ,screen.Y - PlayerSize }, { screen.X + PlayerSize ,screen.Y + PlayerSize },color);
	}

	void RadarDraw(FVector2D position, FVector2D size, FVector camera_location, FRotator camera_rotation) 
	{
		radar::position = position;
		radar::size = size;
		radar::camera_location = camera_location;
		radar::camera_rotation = camera_rotation;

		if (settings::radar::DrawRadar.Enabled) {
			if (settings::radar::DrawRadarBackground.Enabled) {
				static UEngine* engine = nullptr;
				if (!engine)
					engine = (UEngine*)UEngine::StaticClass();
				globals::rendering::canvas->K2_DrawTexture(engine->DefaultTexture, position, size, { 0.f,0.f }, { 1.f,1.f }, { 0.f,0.f,0.f,settings::radar::RadarBackgroundAlpha.Val}, EBlendMode::BLEND_Translucent, 0.f, {0.f,0.f});
			}
			Renderer::DrawRectangleSize(position, size, 2.f, FLinearColor(0.1f, 0.1f, 0.1f, 1.f));
		}
		if (settings::radar::DrawRadarNESW.Enabled)
		{
			FVector2D North{};// -y
			FVector2D South{};// +y
			FVector2D East{};// +x
			FVector2D West{};// -x
			FVector Loc = camera_location;
			RotatePoint(&North, {Loc.X,Loc.Y - 100000,0}, radar::camera_location, radar::camera_rotation);
			RotatePoint(&South, {Loc.X,Loc.Y + 100000,0}, radar::camera_location, radar::camera_rotation);
			RotatePoint(&East, {Loc.X + 100000,Loc.Y,0}, radar::camera_location, radar::camera_rotation);
			RotatePoint(&West, {Loc.X - 100000,Loc.Y,0}, radar::camera_location, radar::camera_rotation);
			FVector2D size = { 0.7f,0.7f };
			Renderer::DrawString(Xors(L"N"), North, size, { 1.f,1.f,1.f,1.f });
			Renderer::DrawString(Xors(L"S"), South, size, { 1.f,1.f,1.f,1.f });
			Renderer::DrawString(Xors(L"E"), East, size, { 1.f,1.f,1.f,1.f });
			Renderer::DrawString(Xors(L"W"), West, size, { 1.f,1.f,1.f,1.f });
		}
	}

}
void Draw2DCrossHairRadar(CurrentActor* Current);
bool RadarDragged = false;
float DragPosX = 0;
float DragPosY = 0;
bool RadarBackgroundDrawn = false;
bool RadarModule::OnModuleInit()
{
	return true;
}
bool RadarModule::OnActorModule(CurrentActor* Current)
{
	float width = Renderer::GetCanvasSize().X;
	float height = Renderer::GetCanvasSize().Y;
	FVector2D RadarPos = { Renderer::GetCanvasSize().X * (settings::radar::RadarX.Val),Renderer::GetCanvasSize().Y * (settings::radar::RadarY.Val) };
	FVector2D RadarSize = { (double)settings::radar::RadarSize.Val * 10,(double)settings::radar::RadarSize.Val * 10 };
	if (!RadarBackgroundDrawn) {
		radar::RadarDraw(RadarPos, RadarSize, globals::local::CM->GetCameraLocation(), globals::local::CM->GetCameraRotation());
		RadarBackgroundDrawn = true;
	}
	if (settings::menu::ShowMenu.Enabled)
	{
		float MouseX, MouseY;
		APlayerController::Singleton()->GetMousePosition(&MouseX, &MouseY, true);
		bool isHovered = (MouseX > RadarPos.X && MouseX < RadarPos.X + RadarSize.X && MouseY > RadarPos.Y && MouseY < RadarPos.Y + RadarSize.Y);
		if ((isHovered || DragPosX != 0))
		{
			if (Keyboard::GetState(VK_LBUTTON, 1))
			{
				FVector2D cursorPos = { MouseX,MouseY };

				cursorPos.X -= RadarSize.X;
				cursorPos.Y -= RadarSize.Y;

				if (DragPosX == 0)
				{
					DragPosX = (cursorPos.X - RadarPos.X);
					DragPosY = (cursorPos.Y - RadarPos.Y);
				}
				RadarPos.X = cursorPos.X - DragPosX;
				RadarPos.Y = cursorPos.Y - DragPosY;
				settings::radar::RadarX.Val = (RadarPos.X / width);
				settings::radar::RadarY.Val = (RadarPos.Y / height);
			}
			else
			{
				DragPosY = 0;
				DragPosX = 0;
			}
		}
	}
	AShooterCharacter* Player;
	APrimalDinoCharacter* Dino;
	APrimalStructure* Struct;
	switch (Current->Type)
	{
	case ActorType::Player:
		Player = reinterpret_cast<AShooterCharacter*>(Current->Actor);

		if (!IsValid(Player) || !IsValid(Player->Mesh) || !IsValid(Player->RootComponent))
			return false;

		if (settings::radar::DrawCrosshairRadar.Enabled) {
			if (Player->IsAlive() && Player->TargetingTeam > 100) {
				if (Player->TargetingTeam != globals::local::LP->TargetingTeam || (settings::radar::CrossHairShowTribePlayers.Enabled && Player->TargetingTeam == globals::local::LP->TargetingTeam)) {
					if (!Player->bIsSleeping || (settings::radar::CrossHairShowSleepingPlayers.Enabled && Player->bIsSleeping)) {
						if (Player != globals::local::LP) {
							Draw2DCrossHairRadar(Current);
						}
					}
				}
			}
		}

		if (Player && settings::radar::DrawRadarEnemy.Enabled && !Current->IsFriendly && !Current->IsDead)
		{
			radar::AddToRadar(Current->Pos,  2.f, settings::enemyPlayer::EnemyColor.Color, true);
		}
		else if (Player && settings::radar::DrawRadarTeam.Enabled && Current->IsFriendly && !Current->IsDead)
		{
			radar::AddToRadar(Current->Pos, 2.f, settings::teamPlayer::TeamColor.Color, true);
		}
		break;
	case ActorType::Dino:
		Dino = reinterpret_cast<APrimalDinoCharacter*>(Current->Actor);
		Current->Pos = Dino->K2_GetActorLocation();
		Current->IsFriendly = Dino->TargetingTeam == globals::local::LP->TargetingTeam;
		if (Dino && settings::radar::DrawRadarEnemyDinos.Enabled && !Current->IsFriendly && Dino->BPIsTamed() && !Dino->IsDead())
		{
			radar::AddToRadar(Current->Pos,2.f, settings::enemyDino::EnemyDinoColor.Color, true);
		}
		else if (Dino && settings::radar::DrawRadarTeamDinos.Enabled && Current->IsFriendly && Dino->BPIsTamed() && !Dino->IsDead())
		{
			radar::AddToRadar(Current->Pos,2.f, settings::teamDino::TeamDinoColor.Color, true);
		}
		break;
	}
	return false;
}
bool RadarModule::ModuleRequirements(CurrentActor* Current)
{
	if (!settings::radar::DrawRadar.Enabled && !settings::radar::DrawCrosshairRadar.Enabled)
		return false;
	if (!Current)
		return false;
	if (IsValid(Current->Actor) && (Current->Type == ActorType::Player || Current->Type == ActorType::Dino))
	{
		return true;
	}
	return true;
}
void RadarModule::PostActors()
{
	if (!RadarBackgroundDrawn && settings::radar::DrawRadar.Enabled)
	{
		radar::RadarDraw({ Renderer::GetCanvasSize().X * (settings::radar::RadarX.Val),Renderer::GetCanvasSize().Y * (settings::radar::RadarY.Val) }, { (double)settings::radar::RadarSize.Val * 10,(double)settings::radar::RadarSize.Val * 10 }, globals::local::CM->GetCameraLocation(), globals::local::CM->GetCameraRotation());
	}
	RadarBackgroundDrawn = false;
}
std::unique_ptr<RadarModule> RadarModule::CreateModule()
{
	return std::make_unique<RadarModule>();
}


#define TORADIAN(YawDegrees) (YawDegrees * 3.14159265359f / 180.0f)
FVector2D ClampDistance(const FVector2D& pos, float minDist, float maxDist) {
	float distance = sqrt(pos.X * pos.X + pos.Y * pos.Y);
	float clampedDistance = std::clamp(distance, minDist, maxDist);

	float angle = atan2(pos.Y, pos.X);

	float clampedX = clampedDistance * cos(angle);
	float clampedY = clampedDistance * sin(angle);

	return FVector2D(clampedX, clampedY);
}
FVector2D RotateByYaw(const FVector& relativePos, float yawRadians) {
	float cosYaw = cos(yawRadians);
	float sinYaw = sin(yawRadians);

	float rotatedX = relativePos.X * cosYaw - relativePos.Y * sinYaw;
	float rotatedY = relativePos.X * sinYaw + relativePos.Y * cosYaw;

	return FVector2D(rotatedY, rotatedX);
}
void RotatePointCircle(FVector2D* screen, FVector origin, FVector camera_location, FRotator camera_rotation, double Zoom, FVector2D RadarPosition, double MinDistance, double MaxDistance, float ScaleMinDistance)
{
	FVector RelativeLocation = origin - camera_location;
	float distance = origin.Distance(camera_location);
	float clampedDistance = std::clamp(distance, 0.f, 30000.f);
	float scaledDistance = ScaleMinDistance + (clampedDistance / 30000.f) * (MaxDistance - ScaleMinDistance);
	float normFactor = distance != 0 ? scaledDistance / distance : 0;
	FVector normalizedRelativePos(RelativeLocation.X * normFactor, RelativeLocation.Y * normFactor, RelativeLocation.Z * normFactor);

	float yawRadians = TORADIAN(-camera_rotation.Yaw);
	FVector2D rotated = ClampDistance(RotateByYaw(normalizedRelativePos, yawRadians), MinDistance, MaxDistance);

	FVector2D radarScreenPos(RadarPosition.X + rotated.X, RadarPosition.Y - rotated.Y);

	*screen = radarScreenPos;
}
FVector2D Rotate2D(FVector2D in, float Degrees)
{
	float angle = Degrees * (3.14159265359f / 180.0f);
	float s = sin(angle);
	float c = cos(angle);
	return FVector2D(in.X * c - in.Y * s, in.X * s + in.Y * c);
}
void DrawArrow2D(FVector2D ArrowStart, FVector2D ArrowTip, float DegreesBetween, float LineWidth, FLinearColor Color)
{
	FVector2D Right = Rotate2D(ArrowStart - ArrowTip, DegreesBetween);
	FVector2D Left = Rotate2D(ArrowStart - ArrowTip, -DegreesBetween);
	Renderer::DrawLine2D(ArrowTip, ArrowStart + Right + (ArrowTip - ArrowStart), LineWidth, Color);
	Renderer::DrawLine2D(ArrowTip, ArrowStart + Left + (ArrowTip - ArrowStart), LineWidth, Color);
	Renderer::DrawLine2D(ArrowStart + Right + (ArrowTip - ArrowStart), ArrowStart + Left + (ArrowTip - ArrowStart), LineWidth, Color);
}
FVector2D UnitVector(FVector2D in)
{
	float length = sqrt(in.X * in.X + in.Y * in.Y);
	return FVector2D(in.X / length, in.Y / length);
}
void Draw2DCrossHairRadar(CurrentActor* Current)
{
	AShooterCharacter* Player = (AShooterCharacter*)Current->Actor;
	float PlayerSize = 2.f;
	FLinearColor color = { 1.f,1.f,1.f,1.f };

	if (Player->TargetingTeam == globals::local::LP->TargetingTeam)
	{
		if (!Player->bIsSleeping)
			color = settings::teamPlayer::TeamColor.Color;
		else
			color = settings::teamPlayer::TeamSleepingColor.Color;
		return;
	}
	else
	{
		if (!Player->bIsSleeping)
			color = settings::enemyPlayer::EnemyColor.Color;
		else
			color = settings::enemyPlayer::EnemySleepingColor.Color;
	}

	if (!Current->Pos.IsValid())
	{
		Current->Pos = Current->Actor->K2_GetActorLocation();
	}
	if (!Current->Pos.IsValid())
		return;

	FVector2D CrossHairPos = { Renderer::GetCanvasSize().X / 2.f,Renderer::GetCanvasSize().Y / 2.f };
	FVector2D screen{};
	RotatePointCircle(&screen, Current->Pos, globals::local::CM->GetCameraLocation(), globals::local::CM->GetCameraRotation(), settings::radar::CrossHairZoom.Val, Renderer::GetCanvasSize() / 2.f, settings::radar::CrossHairMinDistance.Val, settings::radar::CrossHairMaxDistance.Val, settings::radar::CrossHairScaleMinDistance.Val);
	FVector2D ArrowTip = screen;
	FVector2D ArrowStart = screen - UnitVector(screen - CrossHairPos) * 8.f;
	DrawArrow2D(ArrowStart, ArrowTip, settings::radar::CrossHairDegreesBetween.Val, 2.f, color);
}
void Draw3DCrossHairRadar(CurrentActor* Current)
{
	float PlayerSize = 2.f;
	FLinearColor color = { 1.f,1.f,1.f,1.f };
	if (Current->Type == ActorType::Player)
	{
		if (Current->IsFriendly)
		{
			color = settings::teamPlayer::TeamColor.Color;
		}
		else
		{
			color = settings::enemyPlayer::EnemyColor.Color;
		}
	}
	else if (Current->Type == ActorType::Dino)
	{
		if (Current->IsFriendly)
		{
			color = settings::teamDino::TeamDinoColor.Color;
		}
		else
		{
			color = settings::enemyDino::EnemyDinoColor.Color;
		}
	}
	FVector world_location = Current->Pos;
	FVector2D screen{};
	FVector RadarMiddle = globals::local::CM->GetCameraLocation() + (globals::local::CM->GetActorForwardVector() * 1000);
	float RadarMiddleOffset = 100.f;
	FVector ActorDirection = world_location - RadarMiddle;
	ActorDirection.Normalize();
	FVector ActorLocation = RadarMiddle + (ActorDirection * RadarMiddleOffset);
	FVector ArrowStart = ActorLocation + (ActorDirection * 10);
}
void Draw3DRadar(CurrentActor* Current)
{
	float PlayerSize = 2.f;
	FLinearColor color = { 1.f,1.f,1.f,1.f };
	if (Current->Type == ActorType::Player)
	{
		if (Current->IsFriendly)
		{
			color = settings::teamPlayer::TeamColor.Color;
		}
		else
		{
			color = settings::enemyPlayer::EnemyColor.Color;
		}
	}
	else if (Current->Type == ActorType::Dino)
	{
		if (Current->IsFriendly)
		{
			color = settings::teamDino::TeamDinoColor.Color;
		}
		else
		{
			color = settings::enemyDino::EnemyDinoColor.Color;
		}
	}
	FVector world_location = Current->Pos;
	FVector2D screen{};
	FVector RadarMiddle = globals::local::LP->K2_GetActorLocation();
	float RadarMiddleOffset = 100.f;
	FVector ActorDirection = world_location - RadarMiddle;
	ActorDirection.Normalize();
	FVector ActorLocation = RadarMiddle + (ActorDirection * RadarMiddleOffset);
	FVector ActorArrowEndLocation = ActorLocation + (ActorDirection * 50);
	Renderer::DrawLine3D(globals::local::PC, ActorLocation, ActorArrowEndLocation, 4.f, color);
}