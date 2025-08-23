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
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * PredefinedClass BasicTypes.TArray
	 * Size -> 0x0000
	 */
	template<typename T>
	class TArray
	{
	public:
		T*                                                         _data;                                                   // 0x0000(0x0000)
		int32_t                                                    _count;                                                  // 0x0000(0x0000)
		int32_t                                                    _max;                                                    // 0x0000(0x0000)

		friend class FString;
	public:
		TArray()
		{
			_data = nullptr;
			_count = 0;
			_max = 0;
		}
		inline TArray(int32_t Size)
			: _count(0), _max(Size), _data(reinterpret_cast<T*>(malloc(sizeof(T)* Size)))
		{
		}
		T* Data() const
		{
			return _data;
		}

		int32_t Count() const
		{
			return _count;
		}

		int32_t Max() const
		{
			return _max;
		}
		bool IsValid()
		{
			return _data != nullptr;
		}
		bool IsValidIndex(int32_t i) const
		{
			return i < _count;
		}

		T& operator[](int32_t i)
		{
			return _data[i];
		}

		const T& operator[](int32_t i) const
		{
			return _data[i];
		}
		void ResetNum()
		{
			_count = 0;
		}

		void Add(const T& Element)
		{
			if (_count >= _max)
			{
				// Perform resizing
				_max = (_max == 0) ? 1 : _max + 1;

				T* NewData = new T[_max];

				// Copy existing elements
				for (int32_t i = 0; i < _count; ++i)
				{
					NewData[i] = _data[i];
				}

				// Delete old memory & update pointer
				delete[] _data;
				_data = NewData;
			}

			// Add the new element
			_data[_count++] = Element;
		}

		void Reserve(int32_t NewMax)
		{
			if (NewMax > _max)
			{
				T* NewData = new T[NewMax];

				// Copy existing elements
				int32_t Count = _count;
				for (int32_t i = 0; i < Count; ++i)
				{
					NewData[i] = _data[i];
				}

				// Delete old memory & update pointer
				delete[] _data;
				_data = NewData;
				_max = NewMax;
				_count = Count;
			}
		}
	};

	/**
	 * PredefinedClass BasicTypes.FString
	 * Size -> 0x0000
	 */
	//class FString : public TArray<wchar_t>
	//{
	//public:
	//	FString();
	//	FString(const wchar_t* other);
	//	const wchar_t* wc_str() const;
	//	const char* c_str() const;
	//	bool IsValid() const;
	//	std::string ToString() const;
	//	std::wstring ToStringW() const;
	//};
	class FString : public TArray<wchar_t>
	{
	public:
		inline FString() = default;

		using TArray::TArray;

		inline FString(const wchar_t* WChar)
		{
			_max = _count = *WChar ? (int32_t)std::wcslen(WChar) + 1 : 0;

			if (_count)
			{
				_data = const_cast<wchar_t*>(WChar);
			}
		}

		inline FString operator=(const wchar_t*&& Other)
		{
			return FString(Other);
		}

		inline std::wstring ToWString()
		{
			if (IsValid())
			{
				return _data;
			}

			return L"";
		}

		inline std::string ToString()
		{
			if (IsValid())
			{
				std::wstring WData(_data);
				return std::string(WData.begin(), WData.end());
			}

			return "";
		}

		/**
		 * Function:
		 * 		RVA    -> 0x00000000
		 * 		Name   -> PredefinedFunction BasicTypes.FString.wc_str
		 * 		Flags  -> ()
		 */
		inline const wchar_t* wc_str() const
		{
			return _data;
		}
	};

	/**
	 * PredefinedClass BasicTypes.FUObjectItem
	 * Size -> 0x0000
	 */
	class FUObjectItem
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)
		int32_t                                                    Flags;                                                   // 0x0008(0x0004)
		int32_t                                                    ClusterIndex;                                            // 0x000C(0x0004)
		int32_t                                                    SerialNumber;                                            // 0x0010(0x0004)
		unsigned char                                              pad_642Y69Y6YR[0x04];                                    // 0x0014(0x0004)

	public:
		bool IsUnreachable() const;
		bool IsPendingKill() const;
	};

	/**
	 * PredefinedClass BasicTypes.TUObjectArray
	 * Size -> 0x0000
	 */
	//class TUObjectArray
	//{
	//private:
	//	static const constexpr int32_t                             NumElementsPerChunk = 64 * 1024;                         // 0x0000(0x0000)
	//	FUObjectItem**                                             Objects;                                                 // 0x0000(0x0000)
	//	FUObjectItem*                                              PreAllocatedObjects;                                     // 0x0000(0x0000)
	//public:
	//	int32_t                                                    MaxElements;                                             // 0x0000(0x0000)
	//	int32_t                                                    NumElements;                                             // 0x0000(0x0000)
	//	int32_t                                                    MaxChunks;                                               // 0x0000(0x0000)
	//	int32_t                                                    NumChunks;                                               // 0x0000(0x0000)

	//public:
	//	int32_t Count() const;
	//	int32_t Max() const;
	//	bool IsValidIndex(int32_t Index) const;
	//	UObject* GetObjectPtr(uint32_t id) const;
	//	UObject* GetByIndex(int32_t index) const;
	//	FUObjectItem* GetItemByIndex(int32_t index) const;
	//	UObject* operator[](int32_t i);
	//	const UObject* operator[](int32_t i) const;
	//};
	struct TUObjectArray
	{
		byte** Objects;
		byte* PreAllocatedObjects;
		uint32_t MaxElements;
		uint32_t NumElements;
		uint32_t MaxChunks;
		uint32_t NumChunks;
		UObject* operator[](int32_t i)
		{
			return GetObjectPtr(i);
		}
		FUObjectItem* GetObjectPtr2(int32_t Index) const
		{
			const int32_t ChunkIndex = Index / 65536;
			const int32_t WithinChunkIndex = Index % 65536;
			if ((uint32_t)ChunkIndex > NumChunks) return nullptr;
			if ((uint32_t)Index > MaxElements) return nullptr;
			auto Chunk = Objects[ChunkIndex];
			if (!Chunk) return nullptr;
			auto item = reinterpret_cast<FUObjectItem*>(Chunk);
			if (!item) return nullptr;
			return item + WithinChunkIndex;
		}
		/**
		 * Function:
		 * 		RVA    -> 0x00000000
		 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Count
		 * 		Flags  -> ()
		 */
		int32_t Count() const
		{
			return NumElements;
		}

		/**
		 * Function:
		 * 		RVA    -> 0x00000000
		 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.Max
		 * 		Flags  -> ()
		 */
		int32_t Max() const
		{
			return MaxElements;
		}

		/**
		 * Function:
		 * 		RVA    -> 0x00000000
		 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.IsValidIndex
		 * 		Flags  -> ()
		 * Parameters:
		 * 		int32_t                                            Index
		 */
		bool IsValidIndex(int32_t Index) const
		{
			return Index < Count() && Index >= 0;
		}
		/**
		 * Function:
		 * 		RVA    -> 0x00000000
		 * 		Name   -> PredefinedFunction BasicTypes.TUObjectArray.operator[]
		 * 		Flags  -> ()
		 * Parameters:
		 * 		int32_t                                            i
		 */
		const UObject* operator[](int32_t i) const
		{
			return GetObjectPtr(i);
		}
		UObject* GetByIndex(int32_t index) const;
		FUObjectItem* GetItemByIndex(int32_t index) const;
		struct UObject* GetObjectPtr(uint32_t id) const;

	};
	struct FNameEntryHandle
	{
		uint32_t Block = 0;
		uint32_t Offset = 0;

		FNameEntryHandle(uint32_t block, uint32_t offset) : Block(block), Offset(offset) {};
		FNameEntryHandle(uint32_t id) : Block(id >> 16), Offset(id & 65535) {};
		operator uint32_t() const { return (Block << 16 | Offset); }
	};

	struct FNameEntry
	{
		uint16_t bIsWide : 1;
		uint16_t LowercaseProbeHash : 5;
		uint16_t Len : 10;
		union
		{
			char AnsiName[1024];
			wchar_t	WideName[1024];
		};

		std::string String();
	};
	
	struct FNamePool
	{
		byte Lock[8];
		uint32_t CurrentBlock;
		uint32_t CurrentByteCursor;
		byte* Blocks[8192];

		FNameEntry* GetEntry(FNameEntryHandle handle) const;
	};
	extern FNamePool* NamePoolData;
	struct FName
	{
		uint32_t Index;
		uint32_t Number;

		std::string GetName();
		FName();
	};


	///**
	// * PredefinedClass BasicTypes.FName
	// * Size -> 0x0000
	// */
	//class FName
	//{
	//public:
	//	static inline void* AppendStringOff = nullptr;

	//	uint32_t Index;
	//	uint32_t Number;

	//	std::string GetRawString() const;

	//	std::string ToString() const;

	//	inline bool operator==(const FName& Other) const
	//	{
	//		return Index == Other.Index;
	//	}

	//	inline bool operator!=(const FName& Other) const
	//	{
	//		return Index != Other.Index && Number == Other.Number;
	//	}
	//	FName();
	//	FName(int32_t i);
	//};

	/**
	 * PredefinedClass BasicTypes.TEnumAsByte
	 * Size -> 0x0000
	 */
	template<class TEnum>
	class TEnumAsByte
	{
	private:
		uint8_t                                                    _value;                                                  // 0x0000(0x0000)

	public:
		TEnumAsByte()
		{

		}

		TEnumAsByte(TEnum value)
		{
			_value = static_cast<uint8_t>(value);
		}

		TEnumAsByte(int32_t value)
		{
			_value = static_cast<uint8_t>(value);
		}

		TEnumAsByte(uint8_t value)
		{
			_value = value;
		}

		operator TEnum() const
		{
			return (TEnum)_value;
		}

		TEnum GetValue() const
		{
			return (TEnum)_value;
		}

	};
	template<typename ClassType>
	class TSubclassOf
	{
		class UClass* ClassPtr;

	public:
		TSubclassOf() = default;

		inline TSubclassOf(UClass* Class)
			: ClassPtr(Class)
		{
		}

		inline UClass* Get()
		{
			return ClassPtr;
		}

		inline operator UClass* () const
		{
			return ClassPtr;
		}

		template<typename Target, typename = std::enable_if<std::is_base_of_v<Target, ClassType>, bool>::type>
		inline operator TSubclassOf<Target>() const
		{
			return ClassPtr;
		}

		inline UClass* operator->()
		{
			return ClassPtr;
		}

		inline TSubclassOf& operator=(UClass* Class)
		{
			ClassPtr = Class;

			return *this;
		}

		inline bool operator==(const TSubclassOf& Other) const
		{
			return ClassPtr == Other.ClassPtr;
		}

		inline bool operator!=(const TSubclassOf& Other) const
		{
			return ClassPtr != Other.ClassPtr;
		}

		inline bool operator==(UClass* Other) const
		{
			return ClassPtr == Other;
		}

		inline bool operator!=(UClass* Other) const
		{
			return ClassPtr != Other;
		}
	};
	/**
	 * PredefinedClass BasicTypes.FScriptInterface
	 * Size -> 0x0000
	 */
	class FScriptInterface
	{
	private:
		UObject*                                                   ObjectPointer;                                           // 0x0000(0x0000)
		void*                                                      InterfacePointer;                                        // 0x0000(0x0000)

	public:
		UObject* GetObjectPtr() const;
		UObject*& GetObjectRef();
		void* GetInterface() const;
	};

	/**
	 * PredefinedClass BasicTypes.TScriptInterface
	 * Size -> 0x0000
	 */
	template<class InterfaceType>
	class TScriptInterface : public FScriptInterface
	{
	public:
		InterfaceType* operator->() const
		{
			return (InterfaceType*)GetInterface();
		}

		InterfaceType& operator*() const
		{
			return *((InterfaceType*)GetInterface());
		}

		operator bool() const
		{
			return GetInterface() != nullptr;
		}

	};

	/**
	 * PredefinedClass BasicTypes.FTextData
	 * Size -> 0x0000
	 */
	class FTextData
	{
	private:
		uint8_t                                                    UnknownData[0x28];                                       // 0x0000(0x0000)
	public:
		wchar_t*                                                   Name;                                                    // 0x0000(0x0000)
		int32_t*                                                   Length;                                                  // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FText
	 * Size -> 0x0000
	 */
	class FText
	{
	private:


	public:
		FTextData* Data;                                                    // 0x0000(0x0000)
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
		wchar_t* Get() const;
		std::string ToString() const;
		std::wstring ToWString() const;
	};

	/**
	 * PredefinedClass BasicTypes.FScriptDelegate
	 * Size -> 0x0000
	 */
	class FScriptDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FScriptMulticastDelegate
	 * Size -> 0x0000
	 */
	class FScriptMulticastDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FMulticastSparseDelegate
	 * Size -> 0x0000
	 */
	class FMulticastSparseDelegate
	{
	private:
		uint8_t                                                    UnknownData[0x01];                                       // 0x0000(0x0000)
	};

	#ifdef _MSC_VER
		#pragma pack(pop)
	#endif	/**
	 * PredefinedClass BasicTypes.TPair
	 * Size -> 0x0000
	 */
	template<typename KeyType, typename ValueType>
	class TPair
	{
	public:
		KeyType                                                    First;                                                   // 0x0000(0x0000)
		ValueType                                                  Second;                                                  // 0x0000(0x0000)
	};
	#ifdef _MSC_VER
		#pragma pack(push, 0x01)
	#endif
	#ifdef _MSC_VER
		#pragma pack(pop)
	#endif	/**
	 * PredefinedClass BasicTypes.TSetElement
	 * Size -> 0x0000
	 */
	template<typename ElementType>
	class TSetElement
	{
	public:
		ElementType                                                Value;                                                   // 0x0000(0x0000)
		int32_t                                                    HashNextId;                                              // 0x0000(0x0000)
		int32_t                                                    HashIndex;                                               // 0x0000(0x0000)
	};
	#ifdef _MSC_VER
		#pragma pack(push, 0x01)
	#endif
	/**
	 * PredefinedClass BasicTypes.TMap
	 * Size -> 0x0000
	 */
	template<typename Key, typename Value>
	class TMap
	{
	public:
		TArray<TSetElement<TPair<Key, Value>>>                     Data;                                                    // 0x0000(0x0000)
	private:
		uint8_t                                                    UnknownData01[0x04];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData02[0x04];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData03[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData04[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeSize[0x04];                             // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeFlag[0x04];                             // 0x0000(0x0000)
		uint8_t                                                    UnknownData05[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData06[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData07[0x08];                                     // 0x0000(0x0000)
		uint8_t                                                    UnknownData_MayBeSize02[0x04];                           // 0x0000(0x0000)
		uint8_t                                                    UnknownData08[0x04];                                     // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FStringAssetReference_
	 * Size -> 0x0000
	 */
	class FStringAssetReference_
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FUniqueObjectGuid_
	 * Size -> 0x0000
	 */
	class FUniqueObjectGuid_
	{
	private:
		uint8_t                                                    UnknownData[0x10];                                       // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FStructBaseChain
	 * Size -> 0x0000
	 */
	class FStructBaseChain
	{
	private:
		FStructBaseChain**                                         StructBaseChainArray;                                    // 0x0000(0x0000)
		int32_t                                                    NumStructBasesInChainMinusOne;                           // 0x0000(0x0000)
		uint8_t                                                    Padding_0[0x04];                                         // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FWeakObjectPtr
	 * Size -> 0x0000
	 */
	class FWeakObjectPtr
	{
	public:
		int32_t                                                    ObjectIndex;                                             // 0x0000(0x0000)
		int32_t                                                    ObjectSerialNumber;                                      // 0x0000(0x0000)

	public:
		bool SerialNumbersMatch(FUObjectItem* objectItem) const;
		bool IsValid() const;
		UObject* Get() const;
	};

	/**
	 * PredefinedClass BasicTypes.TWeakObjectPtr
	 * Size -> 0x0000
	 */
	template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
	class TWeakObjectPtr : public TWeakObjectPtrBase
	{
	public:
		T* Get() const
		{
			return (T*)TWeakObjectPtrBase::Get();
		}

		T& operator*() const
		{
			return *Get();
		}

		T* operator->() const
		{
			return Get();
		}

		bool IsValid()
		{
			return TWeakObjectPtrBase::IsValid();
		}

	};

	/**
	 * PredefinedClass BasicTypes.TAutoPointer
	 * Size -> 0x0000
	 */
	template<class T, class TBase>
	class TAutoPointer : public TBase
	{
	public:
		operator T*() const
		{
			return TBase::Get();
		}

		operator const T*() const
		{
			return (const T*)TBase::Get();
		}

		operator bool() const
		{
			return TBase::Get() != nullptr;
		}

	};

	/**
	 * PredefinedClass BasicTypes.TAutoWeakObjectPtr
	 * Size -> 0x0000
	 */
	template<class T>
	class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
	{
		friend class FString;	};

	/**
	 * PredefinedClass BasicTypes.TPersistentObjectPtr
	 * Size -> 0x0000
	 */
	template<typename TObjectID>
	class TPersistentObjectPtr
	{
	public:
		FWeakObjectPtr                                             WeakPtr;                                                 // 0x0000(0x0000)
		int32_t                                                    TagAtLastTest;                                           // 0x0000(0x0000)
		TObjectID                                                  ObjectID;                                                // 0x0000(0x0000)
	};

	/**
	 * PredefinedClass BasicTypes.FLazyObjectPtr
	 * Size -> 0x0000
	 */
	class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
	{	};

	/**
	 * PredefinedClass BasicTypes.FAssetPtr
	 * Size -> 0x0000
	 */
	class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
	{	};

	/**
	 * PredefinedClass BasicTypes.TAssetPtr
	 * Size -> 0x0000
	 */
	template<typename ObjectType>
	class TAssetPtr : public FAssetPtr
	{	};

	/**
	 * PredefinedClass BasicTypes.TLazyObjectPtr
	 * Size -> 0x0000
	 */
	template<typename ObjectType>
	class TLazyObjectPtr : public FLazyObjectPtr
	{	};

	/**
	 * PredefinedClass BasicTypes.ObjectNames
	 * Size -> 0x0000
	 */
	class ObjectNames
	{	};

	struct TReferenceControllerBase
	{
		void* __vftable /*VFT*/;
		std::atomic<int> SharedReferenceCount;
		std::atomic<int> WeakReferenceCount;
	};
	struct FWeakReferencer
	{
		struct TReferenceControllerBase* ReferenceController;
	};
	struct FSharedReferencer
	{
		struct TReferenceControllerBase* ReferenceController;
	};
	template <typename T>
	class TWeakPtr
	{
	public:
		T* Object;
		struct FWeakReferencer WeakReferenceCount;
	};
	template <typename T>
	class TSharedPtr
	{
	public:
		T* Object;
		struct FSharedReferencer SharedReferenceCount;
	};
	template <typename charType>
	struct __declspec(align(8)) TStringView
	{
		const charType* DataPtr;
		int Size;
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
