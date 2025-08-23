#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	struct FInternalUObjectBaseUtilityIsValidFlagsChecker
	{
		static bool CheckObjectValidBasedOnItsFlags(const UObject* Test);
	};
	FORCEINLINE bool IsValid(const UObject* Test)
	{
		return Test && FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags(Test) && ((uint64_t)Test < 0xffffffffffffffff);
	}
	enum EClassFlags
	{
		CLASS_None = 0x00000000u,
		CLASS_Abstract = 0x00000001u,
		CLASS_DefaultConfig = 0x00000002u,
		CLASS_Config = 0x00000004u,
		CLASS_Transient = 0x00000008u,
		CLASS_Optional = 0x00000010u,
		CLASS_MatchedSerializers = 0x00000020u,
		CLASS_ProjectUserConfig = 0x00000040u,
		CLASS_Native = 0x00000080u,
		CLASS_NoExport = 0x00000100u,
		CLASS_NotPlaceable = 0x00000200u,
		CLASS_PerObjectConfig = 0x00000400u,
		CLASS_ReplicationDataIsSetUp = 0x00000800u,
		CLASS_EditInlineNew = 0x00001000u,
		CLASS_CollapseCategories = 0x00002000u,
		CLASS_Interface = 0x00004000u,
		CLASS_CustomConstructor = 0x00008000u,
		CLASS_Const = 0x00010000u,
		CLASS_NeedsDeferredDependencyLoading = 0x00020000u,
		CLASS_CompiledFromBlueprint = 0x00040000u,
		CLASS_MinimalAPI = 0x00080000u,
		CLASS_RequiredAPI = 0x00100000u,
		CLASS_DefaultToInstanced = 0x00200000u,
		CLASS_TokenStreamAssembled = 0x00400000u,
		CLASS_HasInstancedReference = 0x00800000u,
		CLASS_Hidden = 0x01000000u,
		CLASS_Deprecated = 0x02000000u,
		CLASS_HideDropDown = 0x04000000u,
		CLASS_GlobalUserConfig = 0x08000000u,
		CLASS_Intrinsic = 0x10000000u,
		CLASS_Constructed = 0x20000000u,
		CLASS_ConfigDoNotCheckDefaults = 0x40000000u,
		CLASS_NewerVersionExists = 0x80000000u,
	};
	enum EClassCastFlags
	{
		CASTCLASS_None = 0x0000000000000000,
		CASTCLASS_UField = 0x0000000000000001,
		CASTCLASS_FInt8Property = 0x0000000000000002,
		CASTCLASS_UEnum = 0x0000000000000004,
		CASTCLASS_UStruct = 0x0000000000000008,
		CASTCLASS_UScriptStruct = 0x0000000000000010,
		CASTCLASS_UClass = 0x0000000000000020,
		CASTCLASS_FByteProperty = 0x0000000000000040,
		CASTCLASS_FIntProperty = 0x0000000000000080,
		CASTCLASS_FFloatProperty = 0x0000000000000100,
		CASTCLASS_FUInt64Property = 0x0000000000000200,
		CASTCLASS_FClassProperty = 0x0000000000000400,
		CASTCLASS_FUInt32Property = 0x0000000000000800,
		CASTCLASS_FInterfaceProperty = 0x0000000000001000,
		CASTCLASS_FNameProperty = 0x0000000000002000,
		CASTCLASS_FStrProperty = 0x0000000000004000,
		CASTCLASS_FProperty = 0x0000000000008000,
		CASTCLASS_FObjectProperty = 0x0000000000010000,
		CASTCLASS_FBoolProperty = 0x0000000000020000,
		CASTCLASS_FUInt16Property = 0x0000000000040000,
		CASTCLASS_UFunction = 0x0000000000080000,
		CASTCLASS_FStructProperty = 0x0000000000100000,
		CASTCLASS_FArrayProperty = 0x0000000000200000,
		CASTCLASS_FInt64Property = 0x0000000000400000,
		CASTCLASS_FDelegateProperty = 0x0000000000800000,
		CASTCLASS_FNumericProperty = 0x0000000001000000,
		CASTCLASS_FMulticastDelegateProperty = 0x0000000002000000,
		CASTCLASS_FObjectPropertyBase = 0x0000000004000000,
		CASTCLASS_FWeakObjectProperty = 0x0000000008000000,
		CASTCLASS_FLazyObjectProperty = 0x0000000010000000,
		CASTCLASS_FSoftObjectProperty = 0x0000000020000000,
		CASTCLASS_FTextProperty = 0x0000000040000000,
		CASTCLASS_FInt16Property = 0x0000000080000000,
		CASTCLASS_FDoubleProperty = 0x0000000100000000,
		CASTCLASS_FSoftClassProperty = 0x0000000200000000,
		CASTCLASS_UPackage = 0x0000000400000000,
		CASTCLASS_ULevel = 0x0000000800000000,
		CASTCLASS_AActor = 0x0000001000000000,
		CASTCLASS_APlayerController = 0x0000002000000000,
		CASTCLASS_APawn = 0x0000004000000000,
		CASTCLASS_USceneComponent = 0x0000008000000000,
		CASTCLASS_UPrimitiveComponent = 0x0000010000000000,
		CASTCLASS_USkinnedMeshComponent = 0x0000020000000000,
		CASTCLASS_USkeletalMeshComponent = 0x0000040000000000,
		CASTCLASS_UBlueprint = 0x0000080000000000,
		CASTCLASS_UDelegateFunction = 0x0000100000000000,
		CASTCLASS_UStaticMeshComponent = 0x0000200000000000,
		CASTCLASS_FMapProperty = 0x0000400000000000,
		CASTCLASS_FSetProperty = 0x0000800000000000,
		CASTCLASS_FEnumProperty = 0x0001000000000000,
		CASTCLASS_USparseDelegateFunction = 0x0002000000000000,
		CASTCLASS_FMulticastInlineDelegateProperty = 0x0004000000000000,
		CASTCLASS_FMulticastSparseDelegateProperty = 0x0008000000000000,
		CASTCLASS_FFieldPathProperty = 0x0010000000000000,
		CASTCLASS_FObjectPtrProperty = 0x0020000000000000,
		CASTCLASS_FClassPtrProperty = 0x0040000000000000,
		CASTCLASS_FLargeWorldCoordinatesRealProperty = 0x0080000000000000,
	};

	/**
	 * Flags describing an object instance
	 */
	enum EObjectFlags
	{
		// Do not add new flags unless they truly belong here. There are alternatives.
		// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
		RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

		// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
		// The garbage collector also tends to look at these.
		RF_Public = 0x00000001,	///< Object is visible outside its package.
		RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
		RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		RF_Transactional = 0x00000008,	///< Object is transactional.
		RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
		RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
		RF_Transient = 0x00000040,	///< Don't save object.

		// This group of flags is primarily concerned with garbage collection.
		RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
		RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

		// The group of flags tracks the stages of the lifetime of a uobject
		RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
		RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
		RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
		RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
		RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
		RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
		RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
		RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

		// Misc. Flags
		RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
		RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
		RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
		RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
		RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
		RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
		RF_DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
		RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
		RF_NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
		RF_Dynamic  = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times  // @todo: BP2CPP_remove
		RF_WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
		RF_HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package

		// RF_Garbage and RF_PendingKill are mirrored in EInternalObjectFlags because checking the internal flags is much faster for the Garbage Collector
		// while checking the object flags is much faster outside of it where the Object pointer is already available and most likely cached.
		// RF_PendingKill is mirrored in EInternalObjectFlags because checking the internal flags is much faster for the Garbage Collector
		// while checking the object flags is much faster outside of it where the Object pointer is already available and most likely cached.

		RF_PendingKill = 0x20000000,	///< Objects that are pending destruction (invalid for gameplay but valid objects). This flag is mirrored in EInternalObjectFlags as PendingKill for performance
		RF_Garbage = 0x40000000,	///< Garbage from logical point of view and should not be referenced. This flag is mirrored in EInternalObjectFlags as Garbage for performance
		RF_AllocatedInSharedPage = 0x80000000,	///< Allocated from a ref-counted page shared with other UObjects
	};
	inline constexpr EObjectFlags RF_InternalPendingKill = RF_PendingKill;
	inline constexpr EObjectFlags RF_InternalGarbage = RF_Garbage;
	inline constexpr EObjectFlags RF_InternalMirroredFlags = (EObjectFlags)(RF_PendingKill | RF_Garbage);

		/** Mask for all object flags */
#define RF_AllFlags				(EObjectFlags)0xffffffff	///< All flags, used mainly for error checking

/** Flags to load from unreal asset files */
#define RF_Load						((EObjectFlags)(RF_Public | RF_Standalone | RF_Transactional | RF_ClassDefaultObject | RF_ArchetypeObject | RF_DefaultSubObject | RF_TextExportTransient | RF_InheritableComponentTemplate | RF_DuplicateTransient | RF_NonPIEDuplicateTransient)) 

/** Sub-objects will inherit these flags from their SuperObject */
#define RF_PropagateToSubObjects	((EObjectFlags)(RF_Public | RF_ArchetypeObject | RF_Transactional | RF_Transient))

	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CoreUObject.Object
	 * Size -> 0x0028
	 */
	class UClass;
	class UObject
	{
	public:
		static class TUObjectArray*                                GObjects;                                                // 0x0000(0x0008) PREDEFINED PROPERTY
		void**                                                     VfTable;                                                 // 0x0000(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    Flags;                                                   // 0x0008(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    InternalIndex;                                           // 0x000C(0x0004) PRE-DEFINED PROPERTY
		UClass*													   Class;                                                   // 0x0010(0x0008) PRE-DEFINED PROPERTY
		FName                                                      Name;                                                    // 0x0018(0x0008) PRE-DEFINED PROPERTY
		class UObject*                                             Outer;                                                   // 0x0020(0x0008) PRE-DEFINED PROPERTY

	public:
		static TUObjectArray& GetGlobalObjects();
		std::string GetName();
		std::string GetFullName();
		bool IsA(UClass* cmp);
		void ExecuteUbergraph(int32_t EntryPoint);
		void ProcessEvent(class UFunction* function, void* parms);
		static UClass* StaticClass();
		std::string GetObjectName();

		static UClass* FindClass(const std::string& name)
		{
			return FindObject<UClass>(name);
		}

		template<typename T>
		static T* FindObject(const std::string& name)
		{
			for (auto i = 0u; i < UObject::GObjects->NumElements; i++)
			{
				auto object = UObject::GObjects->GetObjectPtr(i);

				if (!object)
					continue;

				if (object && object->GetFullName() == name)
					return static_cast<T*>(object);
			}

			return nullptr;
		}

		template<typename T>
		static T* FindObjectByClass(const UClass* ToFind)
		{
			for (auto i = 0u; i < UObject::GObjects->NumElements; i++)
			{
				auto object = UObject::GObjects->GetObjectPtr(i);

				if (!IsValid(object))
					continue;

				if (object->Class == ToFind)
					return static_cast<T*>(object);
			}

			return nullptr;
		}

		template<typename T>
		static void FindObjectsByClass(const UClass* ToFind, TArray<T*> *outObjects)
		{
			for (auto i = 0u; i < UObject::GObjects->NumElements; i++)
			{
				auto object = UObject::GObjects->GetObjectPtr(i);

				if (!IsValid(object))
					continue;

				if (object->Class == ToFind)
					outObjects->Add(static_cast<T*>(object));
			}
		}

		inline std::string FixName(std::string Name)
		{
			std::string sTemp = Name;
			sTemp = sTemp.substr(0, sTemp.rfind('_'));
			return sTemp;
		}

		bool IsDefaultObject() const
		{
			return (Flags & RF_ClassDefaultObject) == 0x10;
		}

		bool HasTypeFlag(EClassCastFlags TypeFlag);

		FORCEINLINE bool HasAnyFlags(EObjectFlags FlagsToCheck) const
		{
			return (Flags & FlagsToCheck) != 0;
		}

		static UObject* StaticFindObject(UObject* Class, UObject* Outer, const wchar_t* Name, bool ExactClass)
		{
			static void* Address = nullptr;

			if (!Address)
			{
				Address = (void*)(signature(Xors("40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 68 FC FF FF 48 81 EC 98 04 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 85 80 03 00 00 48 83"))).GetPointer();
			}

			return reinterpret_cast<UObject * (__cdecl*)(UObject*, UObject*, const wchar_t*, bool)>(Address)(Class, Outer, Name, ExactClass);
		}

		template <class Type>
		static Type FindObjectSingle(const wchar_t* Name, UObject* Outer = nullptr)
		{
			return reinterpret_cast<Type>(UObject::StaticFindObject(nullptr, Outer, Name, false));
		}
	};




	/**
	 * Class CoreUObject.Interface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Package
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UPackage : public UObject
	{
	public:
		unsigned char                                              UnknownData_OGZR[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Field
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UField : public UObject
	{
	public:
		class UField*                                              Next;                                                    // 0x0028(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Struct
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UStruct : public UField, public FStructBaseChain
	{
	public:
		class UStruct*                                             SuperField;                                              // 0x0040(0x0008) PRE-DEFINED PROPERTY
		class UField*                                              Children;                                                // 0x0048(0x0008) PRE-DEFINED PROPERTY
		class FField*                                              ChildProperties;                                         // 0x0050(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    PropertySize;                                            // 0x0058(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    MinAlignment;                                            // 0x005C(0x0004) PRE-DEFINED PROPERTY
		TArray<uint8_t>                                            Script;                                                  // 0x0060(0x0010) PRE-DEFINED PROPERTY
		class FProperty*                                           PropertyLink;                                            // 0x0070(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           RefLink;                                                 // 0x0078(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           DestructorLink;                                          // 0x0080(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           PostConstructLink;                                       // 0x0088(0x0008) PRE-DEFINED PROPERTY
		TArray<UObject*>                                           ScriptAndPropertyObjectReferences;                       // 0x0090(0x0010) PRE-DEFINED PROPERTY
		class FUnresolvedScriptPropertiesArray*                    UnresolvedScriptProperties;                              // 0x00A0(0x0008) PRE-DEFINED PROPERTY
		class FUnversionedStructSchema*                            UnversionedSchema;                                       // 0x00A8(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Class
	 * Size -> 0x0170 (FullSize[0x0220] - InheritedSize[0x00B0])
	 */
	class UClass : public UStruct
	{
	public:
		uint8                                        Pad_23[0x30];                                      // Fixing Size After Last (Predefined) Property
		EClassCastFlags								 CastFlags;                                         // (0xE0[0x08]) NOT AUTO-GENERATED PROPERTY
		uint8                                        Pad_24[0x30];                                      // Fixing Size After Last (Predefined) Property  
		class UObject*								 DefaultObject;                                     // (0x118[0x08]) NOT AUTO-GENERATED PROPERTY
		uint8                                        Pad_25[0x100];                                     // Fixing Size Of Struct 


	public:
		template<typename T>
		T* CreateDefaultObjectOfType()
		{
			return static_cast<T*>(CreateDefaultObject());
		}
		UObject* CreateDefaultObject();
		static UClass* StaticClass();

		class UFunction* GetFunction(const std::string& ClassName, const std::string& FuncName)
		{
			for (UStruct* Clss = this; Clss; Clss = Clss->SuperField)
			{
				if (Clss->GetName() == ClassName)
				{
					for (UField* Field = Clss->Children; Field; Field = Field->Next)
					{
						if (Field->HasTypeFlag(EClassCastFlags::CASTCLASS_UFunction) && Field->GetName() == FuncName)
						{
							return (class UFunction*)(Field);
						}
					}
				}
			}
			return nullptr;
		}
	};

	/**
	 * Class CoreUObject.ScriptStruct
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UScriptStruct : public UStruct
	{
	public:
		unsigned char                                              UnknownData_53V8[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.GCObjectReferencer
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGCObjectReferencer : public UObject
	{
	public:
		unsigned char                                              UnknownData_2PLO[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextBuffer
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTextBuffer : public UObject
	{
	public:
		unsigned char                                              UnknownData_2X7M[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Function
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UFunction : public UStruct
	{
	public:
		int32_t                                                    FunctionFlags;                                           // 0x00B0(0x0004) PRE-DEFINED PROPERTY
		uint8_t                                                    NumParms;                                                // 0x00B4(0x0001) PRE-DEFINED PROPERTY
		uint16_t                                                   ParmsSize;                                               // 0x00B5(0x0002) PRE-DEFINED PROPERTY
		unsigned char                                              pad_G1HTVDLVFK[0x01];                                    // 0x00B7(0x0001) PRE-DEFINED PROPERTY
		uint16_t                                                   ReturnValueOffset;                                       // 0x00B8(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCId;                                                   // 0x00BA(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCResponseId;                                           // 0x00BC(0x0002) PRE-DEFINED PROPERTY
		unsigned char                                              pad_38MW07KRXD[0x02];                                    // 0x00BE(0x0002) PRE-DEFINED PROPERTY
		class UProperty*                                           FirstPropertyToInit;                                     // 0x00C0(0x0008) PRE-DEFINED PROPERTY
		class UFunction*                                           EventGraphFunction;                                      // 0x00C8(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    EventGraphCallOffset;                                    // 0x00D0(0x0004) PRE-DEFINED PROPERTY
		unsigned char                                              pad_CIFLHNGL2M[0x04];                                    // 0x00D4(0x0004) PRE-DEFINED PROPERTY
		void*                                                      Func;                                                    // 0x00D8(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateFunction
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UDelegateFunction : public UFunction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SparseDelegateFunction
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class USparseDelegateFunction : public UDelegateFunction
	{
	public:
		unsigned char                                              UnknownData_VEYX[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DynamicClass
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class UDynamicClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_E645[0x80];                                  // 0x0220(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PackageMap
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UPackageMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_7PRS[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Enum
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UEnum : public UField
	{
	public:
		unsigned char                                              UnknownData_2YOS[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderClass
	 * Size -> 0x01C0 (FullSize[0x03E0] - InheritedSize[0x0220])
	 */
	class ULinkerPlaceholderClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_338I[0x1C0];                                 // 0x0220(0x01C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderExportObject
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class ULinkerPlaceholderExportObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_G19W[0xD0];                                  // 0x0028(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderFunction
	 * Size -> 0x01C0 (FullSize[0x02A0] - InheritedSize[0x00E0])
	 */
	class ULinkerPlaceholderFunction : public UFunction
	{
	public:
		unsigned char                                              UnknownData_DP9D[0x1C0];                                 // 0x00E0(0x01C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MetaData
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UMetaData : public UObject
	{
	public:
		unsigned char                                              UnknownData_XQDW[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectRedirector
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectRedirector : public UObject
	{
	public:
		unsigned char                                              UnknownData_KXWO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Property
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UProperty : public UField
	{
	public:
		unsigned char                                              UnknownData_WC9R[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.EnumProperty
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UEnumProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_VDCR[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ArrayProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UArrayProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_9VPS[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectPropertyBase
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UObjectPropertyBase : public UProperty
	{
	public:
		unsigned char                                              UnknownData_S66U[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.BoolProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBoolProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_CSFR[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NumericProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNumericProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ByteProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UByteProperty : public UNumericProperty
	{
	public:
		unsigned char                                              UnknownData_9EPX[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UClassProperty : public UObjectProperty
	{
	public:
		unsigned char                                              UnknownData_S5SY[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDelegateProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DoubleProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDoubleProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.FloatProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFloatProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.IntProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UIntProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int8Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt8Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.InterfaceProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UInterfaceProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_WXQT[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LazyObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class ULazyObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MapProperty
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UMapProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_QO0D[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegateProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UMulticastDelegateProperty : public UDelegateProperty
	{
	public:
		unsigned char                                              UnknownData_0TOP[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastInlineDelegateProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastSparseDelegateProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NameProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNameProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SetProperty
	 * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
	 */
	class USetProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_11UV[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class USoftObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class USoftClassProperty : public USoftObjectProperty
	{
	public:
		unsigned char                                              UnknownData_T00K[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StrProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UStrProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StructProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UStructProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_L5EK[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt32Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt32Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.WeakObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UWeakObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTextProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PropertyWrapper
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPropertyWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_IOLC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegatePropertyWrapper
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastInlineDelegatePropertyWrapper
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
