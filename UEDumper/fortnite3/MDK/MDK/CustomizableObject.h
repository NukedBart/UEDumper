
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MutableRuntime
/// dependency: StructUtils
/// dependency: UMG

/// Class /Script/CustomizableObject.CustomizableObjectExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableObjectExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectInstanceUserData
/// Size: 0x0020 (0x000028 - 0x000048)
class UCustomizableObjectInstanceUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     AnimBPGameplayTags                                          OFFSET(getStruct<T>, {0x28, 32, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUserData.SetAnimationGameplayTags
	// void SetAnimationGameplayTags(FGameplayTagContainer& InstanceTags);                                                      // [0x772a9b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUserData.GetAnimationGameplayTags
	// FGameplayTagContainer GetAnimationGameplayTags();                                                                        // [0x772a998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CustomizableObject.CustomizableInstancePrivate
/// Size: 0x03A0 (0x000028 - 0x0003C8)
class UCustomizableInstancePrivate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(TArray<class USkeletalMesh*>)              SkeletalMeshes                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGeneratedMaterial>)                GeneratedMaterials                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 GeneratedTextures                                           OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UTexture2D*>>) TextureReuseCache                                          OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TArray<FCustomizableInstanceComponentData>) ComponentsData                                             OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         ReferencedMaterials                                         OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<class UPhysicsAsset*>)              ClothingPhysicsAssets                                       OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<class UClass*>)                     GatheredAnimBPs                                             OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AnimBPGameplayTags                                          OFFSET(getStruct<T>, {0x180, 32, 0, 0})
	CMember(TMap<UClass*, FAnimBpGeneratedPhysicsAssets>) AnimBpPhysicsAssets                                      OFFSET(get<T>, {0x1A0, 80, 0, 0})
	CMember(TArray<class UTexture*>)                   LoadedPassThroughTexturesPendingSetMaterial                 OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FCustomizableObjectInstanceDescriptor)     CommittedDescriptor                                         OFFSET(getStruct<T>, {0x218, 296, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectInstanceUsage
/// Size: 0x0040 (0x000028 - 0x000068)
class UCustomizableObjectInstanceUsage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     SkippedLastRenderTime                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(class UCustomizableSkeletalComponent*)     CustomizableSkeletalComponent                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   UsedSkeletalMeshComponent                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UCustomizableObjectInstance*)        UsedCustomizableObjectInstance                              OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   UsedComponentIndex                                          OFFSET(get<int32_t>, {0x60, 4, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUsage.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x772aaec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstanceUsage.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                     // [0x772aa70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.CustomizableObjectPrivate
/// Size: 0x0310 (0x000028 - 0x000338)
class UCustomizableObjectPrivate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FModelResources)                           ModelResources                                              OFFSET(getStruct<T>, {0x38, 472, 0, 0})
	CMember(TArray<FMutableModelParameterProperties>)  ParameterProperties                                         OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectResourceDataContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UCustomizableObjectResourceDataContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FCustomizableObjectResourceData)           Data                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomizableObjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableStreamingManager                                     OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectSkeletalMesh
/// Size: 0x0050 (0x0004D8 - 0x000528)
class UCustomizableObjectSkeletalMesh : public USkeletalMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectSystemPrivate
/// Size: 0x05A8 (0x000028 - 0x0005D0)
class UCustomizableObjectSystemPrivate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UCustomizableObjectInstance*)        CurrentInstanceBeingUpdated                                 OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TArray<FPendingReleaseSkeletalMeshInfo>)   PendingReleaseSkeletalMesh                                  OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(class UCustomizableInstanceLODManagementBase*) DefaultInstanceLODManagement                            OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCustomizableInstanceLODManagementBase*) CurrentInstanceLODManagement                            OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(TArray<class UTexture2D*>)                 ProtectedCachedTextures                                     OFFSET(get<T>, {0x4D0, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableSkeletalComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UCustomizableSkeletalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UCustomizableObjectInstance*)        CustomizableObjectInstance                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	DMember(int32_t)                                   ComponentIndex                                              OFFSET(get<int32_t>, {0x228, 4, 0, 0})
	CMember(class UCustomizableObjectInstanceUsage*)   CustomizableObjectInstanceUsage                             OFFSET(get<T>, {0x240, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x7755f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);                                                                     // [0x7755df4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.CustomizableSystemImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableSystemImageProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.EditorImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditorImageProvider : public UCustomizableSystemImageProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagementBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableInstanceLODManagementBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagement
/// Size: 0x0058 (0x000028 - 0x000080)
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectBulk
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectBulk : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/CustomizableObject.CustomizableObject
/// Size: 0x0168 (0x000028 - 0x000190)
class UCustomizableObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMutableLODSettings)                       LODSettings                                                 OFFSET(getStruct<T>, {0x28, 112, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ClothSharedConfigsData                                     OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCustomizableObjectClothingAssetData>) ContributingClothingAssetsData                           OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectMeshToMeshVertData>) ClothMeshToMeshVertData                                 OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectResourceData>)   AlwaysLoadedExtensionData                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStreamedResourceData>) StreamedExtensionData                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStreamedResourceData>) StreamedResourceData                                  OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bEnableUseRefSkeletalMeshAsPlaceholder                      OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bPreserveUserLODsOnFirstGeneration                          OFFSET(get<bool>, {0xF9, 1, 0, 0})
	DMember(bool)                                      bEnableMeshCache                                            OFFSET(get<bool>, {0xFA, 1, 0, 0})
	DMember(bool)                                      bEnableMeshStreaming                                        OFFSET(get<bool>, {0xFB, 1, 0, 0})
	CMember(TArray<FName>)                             LowPriorityTextures                                         OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FString>)                           CustomizableObjectClassTags                                 OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FString>)                           PopulationClassTags                                         OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TMap<FString, FParameterTags>)             CustomizableObjectParametersTags                            OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(class UCustomizableObjectBulk*)            BulkData                                                    OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UCustomizableObjectPrivate*)         Private                                                     OFFSET(get<T>, {0x188, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObject.IsParameterMultidimensional
	// bool IsParameterMultidimensional(FString InParameterName);                                                               // [0x774c1d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.IsCompiled
	// bool IsCompiled();                                                                                                       // [0x774c1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
	// FParameterUIData GetStateUIMetadataFromIndex(int32_t StateIndex);                                                        // [0x774b248] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadata
	// FParameterUIData GetStateUIMetadata(FString StateName);                                                                  // [0x774ab24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterName
	// FString GetStateParameterName(FString StateName, int32_t ParameterIndex);                                                // [0x774a3b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterCount
	// int32_t GetStateParameterCount(FString StateName);                                                                       // [0x7749ca4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateName
	// FString GetStateName(int32_t StateIndex);                                                                                // [0x7749c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetStateCount
	// int32_t GetStateCount();                                                                                                 // [0x7749be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetProjectorParameterDefaultValue
	// void GetProjectorParameterDefaultValue(FString InParameterName, FVector3f& OutPos, FVector3f& OutDirection, FVector3f& OutUp, FVector3f& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType); // [0x7746448] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
	// FParameterUIData GetParameterUIMetadataFromIndex(int32_t ParamIndex);                                                    // [0x774555c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadata
	// FParameterUIData GetParameterUIMetadata(FString ParamName);                                                              // [0x7744e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterTypeByName
	// EMutableParameterType GetParameterTypeByName(FString Name);                                                              // [0x7744760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterType
	// EMutableParameterType GetParameterType(int32_t ParamIndex);                                                              // [0x77446d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterName
	// FString GetParameterName(int32_t ParamIndex);                                                                            // [0x774463c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterDescriptionCount
	// int32_t GetParameterDescriptionCount(FString ParamName);                                                                 // [0x7743f6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetParameterCount
	// int32_t GetParameterCount();                                                                                             // [0x7743f4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterNumOptions
	// int32_t GetIntParameterNumOptions(int32_t ParamIndex);                                                                   // [0x7742f7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterDefaultValue
	// int32_t GetIntParameterDefaultValue(FString InParameterName);                                                            // [0x774289c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
	// FString GetIntParameterAvailableOption(int32_t ParamIndex, int32_t K);                                                   // [0x77427d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetFloatParameterDefaultValue
	// float GetFloatParameterDefaultValue(FString InParameterName);                                                            // [0x77412d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetComponentCount
	// int32_t GetComponentCount();                                                                                             // [0x7741260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetColorParameterDefaultValue
	// FLinearColor GetColorParameterDefaultValue(FString InParameterName);                                                     // [0x77404b8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.GetBoolParameterDefaultValue
	// bool GetBoolParameterDefaultValue(FString InParameterName);                                                              // [0x773f688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.FindParameter
	// int32_t FindParameter(FString Name);                                                                                     // [0x773e000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObject.CreateInstance
	// class UCustomizableObjectInstance* CreateInstance();                                                                     // [0x773ca98] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.DGGUI
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UDGGUI : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/CustomizableObject.DGGUI.SetCustomizableObjectInstanceUsage
	// void SetCustomizableObjectInstanceUsage(class UCustomizableObjectInstanceUsage* CustomizableObjectInstanceUsage);        // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/CustomizableObject.DGGUI.GetCustomizableObjectInstanceUsage
	// class UCustomizableObjectInstanceUsage* GetCustomizableObjectInstanceUsage();                                            // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/CustomizableObject.CustomizableObjectInstance
/// Size: 0x0218 (0x000028 - 0x000240)
class UCustomizableObjectInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FMulticastInlineDelegate)                  UpdatedDelegate                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FCustomizableObjectInstanceDescriptor)     Descriptor                                                  OFFSET(getStruct<T>, {0x50, 296, 0, 0})
	CMember(class UCustomizableInstancePrivate*)       PrivateData                                                 OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UCustomizableObject*)                CustomizableObject                                          OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        OFFSET(get<T>, {0x1E8, 80, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsyncResult
	// void UpdateSkeletalMeshAsyncResult(FDelegateProperty Callback, bool bIgnoreCloseDist, bool bForceHighPriority);          // [0x7755e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
	// void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);                                            // [0x7755d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
	// void SetVectorParameterSelectedOption(FString VectorParamName, FLinearColor& VectorValue);                               // [0x775562c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetTextureParameterSelectedOption
	// void SetTextureParameterSelectedOption(FString TextureParamName, FString TextureValue, int32_t RangeIndex);              // [0x7754ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetReplacePhysicsAssets
	// void SetReplacePhysicsAssets(bool bReplaceEnabled);                                                                      // [0x7754e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValuesFromStream
	// void SetRandomValuesFromStream(FRandomStream& InStream);                                                                 // [0x7754dd4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetRandomValues
	// void SetRandomValues();                                                                                                  // [0x7754d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorValue
	// void SetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float OutAngle, int32_t RangeIndex); // [0x77543b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorUp
	// void SetProjectorUp(FString ProjectorParamName, FVector& Up, int32_t RangeIndex);                                        // [0x7753bf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorScale
	// void SetProjectorScale(FString ProjectorParamName, FVector& Scale, int32_t RangeIndex);                                  // [0x775342c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorPosition
	// void SetProjectorPosition(FString ProjectorParamName, FVector& Pos, int32_t RangeIndex);                                 // [0x7752c68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorDirection
	// void SetProjectorDirection(FString ProjectorParamName, FVector& Direction, int32_t RangeIndex);                          // [0x77524a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetProjectorAngle
	// void SetProjectorAngle(FString ProjectorParamName, float Angle, int32_t RangeIndex);                                     // [0x7751d6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetObject
	// void SetObject(class UCustomizableObject* InObject);                                                                     // [0x7751cec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
	// void SetIntParameterSelectedOption(FString ParamName, FString SelectedOptionName, int32_t RangeIndex);                   // [0x77515a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
	// void SetFloatParameterSelectedOption(FString FloatParamName, float FloatValue, int32_t RangeIndex);                      // [0x7750e68] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetCurrentState
	// void SetCurrentState(FString StateName);                                                                                 // [0x775078c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
	// void SetColorParameterSelectedOption(FString ColorParamName, FLinearColor& ColorValue);                                  // [0x7750070] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBuildParameterRelevancy
	// void SetBuildParameterRelevancy(bool Value);                                                                             // [0x774fff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
	// void SetBoolParameterSelectedOption(FString BoolParamName, bool BoolValue);                                              // [0x774f8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromProjectorRange
	// int32_t RemoveValueFromProjectorRange(FString ParamName);                                                                // [0x774f1d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromIntRange
	// int32_t RemoveValueFromIntRange(FString ParamName);                                                                      // [0x774ead0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveValueFromFloatRange
	// int32_t RemoveValueFromFloatRange(FString ParamName);                                                                    // [0x774e3c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.RemoveMultilayerProjector
	// void RemoveMultilayerProjector(FName& ProjectorParamName);                                                               // [0x774e334] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateVirtualLayer
	// void MultilayerProjectorUpdateVirtualLayer(FName& ProjectorParamName, FName& ID, FMultilayerProjectorVirtualLayer& Layer); // [0x774e1f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorUpdateLayer
	// void MultilayerProjectorUpdateLayer(FName& ProjectorParamName, int32_t Index, FMultilayerProjectorLayer& Layer);         // [0x774da1c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveVirtualLayer
	// void MultilayerProjectorRemoveVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x774d8f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorRemoveLayerAt
	// void MultilayerProjectorRemoveLayerAt(FName& ProjectorParamName, int32_t Index);                                         // [0x774d798] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorNumLayers
	// int32_t MultilayerProjectorNumLayers(FName& ProjectorParamName);                                                         // [0x774d6bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayers
	// TArray<FName> MultilayerProjectorGetVirtualLayers(FName& ProjectorParamName);                                            // [0x774d5b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(FName& ProjectorParamName, FName& ID);               // [0x774d498] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorGetLayer
	// FMultilayerProjectorLayer MultilayerProjectorGetLayer(FName& ProjectorParamName, int32_t Index);                         // [0x774d344] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorFindOrCreateVirtualLayer
	// FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(FName& ProjectorParamName, FName& ID);      // [0x774d224] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateVirtualLayer
	// void MultilayerProjectorCreateVirtualLayer(FName& ProjectorParamName, FName& ID);                                        // [0x774d0fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.MultilayerProjectorCreateLayer
	// void MultilayerProjectorCreateLayer(FName& ProjectorParamName, int32_t Index);                                           // [0x774cfa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
	// bool IsParameterRelevant(FString ParamName);                                                                             // [0x774c8b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnySkeletalMesh
	// bool HasAnySkeletalMesh();                                                                                               // [0x774c198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.HasAnyParameters
	// bool HasAnyParameters();                                                                                                 // [0x774c150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetVectorParameters
	// TArray<FCustomizableObjectVectorParameterValue> GetVectorParameters();                                                   // [0x774c134] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureValueRange
	// int32_t GetTextureValueRange(FString ParamName);                                                                         // [0x774ba34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameterSelectedOption
	// FName GetTextureParameterSelectedOption(FString TextureParamName, int32_t RangeIndex);                                   // [0x774b310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetTextureParameters
	// TArray<FCustomizableObjectTextureParameterValue> GetTextureParameters();                                                 // [0x774ba18] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetSkeletalMesh
	// class USkeletalMesh* GetSkeletalMesh(int32_t ComponentIndex);                                                            // [0x7749b54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValueRange
	// int32_t GetProjectorValueRange(FString ParamName);                                                                       // [0x7749454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorValue
	// void GetProjectorValue(FString ProjectorParamName, FVector& OutPos, FVector& OutDirection, FVector& OutUp, FVector& OutScale, float& OutAngle, ECustomizableObjectProjectorType& OutType, int32_t RangeIndex); // [0x77489c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorUp
	// FVector GetProjectorUp(FString ParamName, int32_t RangeIndex);                                                           // [0x77482a4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorScale
	// FVector GetProjectorScale(FString ParamName, int32_t RangeIndex);                                                        // [0x7747b88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
	// FVector GetProjectorPosition(FString ParamName, int32_t RangeIndex);                                                     // [0x774746c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
	// ECustomizableObjectProjectorType GetProjectorParameterType(FString ParamName, int32_t RangeIndex);                       // [0x7746d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorParameters
	// TArray<FCustomizableObjectProjectorParameterValue> GetProjectorParameters();                                             // [0x7747450] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
	// FVector GetProjectorDirection(FString ParamName, int32_t RangeIndex);                                                    // [0x7745d2c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetProjectorAngle
	// float GetProjectorAngle(FString ParamName, int32_t RangeIndex);                                                          // [0x7745628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetNumComponents
	// int32_t GetNumComponents();                                                                                              // [0x7743f2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetMergedAssetUserData
	// TSet<UAssetUserData*> GetMergedAssetUserData(int32_t ComponentIndex);                                                    // [0x7743e28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntValueRange
	// int32_t GetIntValueRange(FString ParamName);                                                                             // [0x774372c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
	// FString GetIntParameterSelectedOption(FString ParamName, int32_t RangeIndex);                                            // [0x7743008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetIntParameters
	// TArray<FCustomizableObjectIntParameterValue> GetIntParameters();                                                         // [0x7743710] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatValueRange
	// int32_t GetFloatValueRange(FString ParamName);                                                                           // [0x77420d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
	// float GetFloatParameterSelectedOption(FString FloatParamName, int32_t RangeIndex);                                       // [0x77419b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetFloatParameters
	// TArray<FCustomizableObjectFloatParameterValue> GetFloatParameters();                                                     // [0x77420bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCustomizableObject
	// class UCustomizableObject* GetCustomizableObject();                                                                      // [0x77412c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetCurrentState
	// FString GetCurrentState();                                                                                               // [0x7741280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
	// FLinearColor GetColorParameterSelectedOption(FString ColorParamName);                                                    // [0x7740b8c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBuildParameterRelevancy
	// bool GetBuildParameterRelevancy();                                                                                       // [0x77404a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
	// bool GetBoolParameterSelectedOption(FString BoolParamName);                                                              // [0x773fd68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetBoolParameters
	// TArray<FCustomizableObjectBoolParameterValue> GetBoolParameters();                                                       // [0x7740484] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimBP
	// class UClass* GetAnimBP(int32_t ComponentIndex, FName& Slot);                                                            // [0x773f588] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.GetAnimationGameplayTags
	// FGameplayTagContainer GetAnimationGameplayTags();                                                                        // [0x773f664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.ForEachAnimInstance
	// void ForEachAnimInstance(int32_t ComponentIndex, FDelegateProperty Delegate);                                            // [0x773f4b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
	// int32_t FindVectorParameterNameIndex(FString ParamName);                                                                 // [0x773edcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
	// int32_t FindProjectorParameterNameIndex(FString ParamName);                                                              // [0x773e6e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
	// int32_t FindIntParameterNameIndex(FString ParamName);                                                                    // [0x773d91c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
	// int32_t FindFloatParameterNameIndex(FString ParamName);                                                                  // [0x773d238] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
	// int32_t FindBoolParameterNameIndex(FString ParamName);                                                                   // [0x773cb54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CreateMultiLayerProjector
	// bool CreateMultiLayerProjector(FName& ProjectorParamName);                                                               // [0x773cabc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.CloneStatic
	// class UCustomizableObjectInstance* CloneStatic(class UObject* Outer);                                                    // [0x773c9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.Clone
	// class UCustomizableObjectInstance* Clone();                                                                              // [0x773c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToProjectorRange
	// int32_t AddValueToProjectorRange(FString ParamName);                                                                     // [0x773c2bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToIntRange
	// int32_t AddValueToIntRange(FString ParamName);                                                                           // [0x773bbd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectInstance.AddValueToFloatRange
	// int32_t AddValueToFloatRange(FString ParamName);                                                                         // [0x773b4b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CustomizableObject.MutableTextureMipDataProviderFactory
/// Size: 0x0028 (0x000028 - 0x000050)
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UCustomizableObjectInstance*)        CustomizableObjectInstance                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectSystem
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomizableObjectSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UCustomizableObjectSystemPrivate*)   Private                                                     OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately
	// void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);                                                        // [0x7767940] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.IsUpdating
	// bool IsUpdating(class UCustomizableObjectInstance* Instance);                                                            // [0x77677f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.IsUpdateResultValid
	// bool IsUpdateResultValid(EUpdateResult UpdateResult);                                                                    // [0x776777c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTotalInstances
	// int32_t GetTotalInstances();                                                                                             // [0x7767758] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
	// int64_t GetTextureMemoryUsed();                                                                                          // [0x7767708] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetPluginVersion
	// FString GetPluginVersion();                                                                                              // [0x77676bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
	// int32_t GetNumPendingInstances();                                                                                        // [0x776767c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetNumInstances
	// int32_t GetNumInstances();                                                                                               // [0x7767628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstanceChecked
	// class UCustomizableObjectSystem* GetInstanceChecked();                                                                   // [0x7767604] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetInstance
	// class UCustomizableObjectSystem* GetInstance();                                                                          // [0x7767604] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
	// int32_t GetAverageBuildTime();                                                                                           // [0x77675a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CustomizableObject.CustomizableSkeletalMeshActor
/// Size: 0x0028 (0x000310 - 0x000338)
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<class UCustomizableSkeletalComponent*>) CustomizableSkeletalComponents                          OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     SkeletalMeshComponents                                      OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(class UCustomizableSkeletalComponent*)     CustomizableSkeletalComponent                               OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/CustomizableObject.DefaultImageProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UDefaultImageProvider : public UCustomizableSystemImageProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UTexture2D*>)                  Textures                                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceBakeOutput
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomizableObjectInstanceBakeOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bWasBakeSuccessful                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FBakedResourceData>)                SavedPackages                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.BakedResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBakedResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EPackageSaveResolutionType)                SaveType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   AssetPath                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.UpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EUpdateResult)                             UpdateResult                                                OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothConfigData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectClothConfigData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ClassPath                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ConfigName                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              ConfigBytes                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothingAssetData
/// Size: 0x0080 (0x000000 - 0x000080)
class FCustomizableObjectClothingAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FClothLODDataCommon>)               LODData                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ConfigsData                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   PhysicsAssetPath                                            OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FGuid)                                     OriginalAssetGuid                                           OFFSET(getStruct<T>, {0x6C, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedPhysicsAssets
/// Size: 0x0040 (0x000000 - 0x000040)
class FReferencedPhysicsAssets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UPhysicsAsset*>)              PhysicsAssetsToMerge                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UPhysicsAsset*>)              AdditionalPhysicsAssets                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedSkeletons
/// Size: 0x0028 (0x000000 - 0x000028)
class FReferencedSkeletons : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<uint16_t>)                          SkeletonIds                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<class USkeleton*>)                  SkeletonsToMerge                                            OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableInstanceComponentData
/// Size: 0x0148 (0x000000 - 0x000148)
class FCustomizableInstanceComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TMap<FName, TWeakObjectPtr<UClass*>>)      AnimSlotToBP                                                OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<UAssetUserData*>)                     AssetUserDataArray                                          OFFSET(get<T>, {0x50, 80, 0, 0})
	SMember(FReferencedSkeletons)                      Skeletons                                                   OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FReferencedPhysicsAssets)                  PhysicsAssets                                               OFFSET(getStruct<T>, {0xD8, 64, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimInstanceOverridePhysicsAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimBpGeneratedPhysicsAssets : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAnimInstanceOverridePhysicsAsset>) AnimInstancePropertyIndexAndPhysicsAssets                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectBoolParameterValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectBoolParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      ParameterValue                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIntParameterValue
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectIntParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ParameterValueName                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           ParameterRangeValueNames                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectFloatParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectFloatParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ParameterValue                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	CMember(TArray<float>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectTextureParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectTextureParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ParameterValue                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	CMember(TArray<FName>)                             ParameterRangeValues                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectVectorParameterValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectVectorParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              ParameterValue                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjector
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectProjector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Direction                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Up                                                          OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 Scale                                                       OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	CMember(ECustomizableObjectProjectorType)          ProjectionType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectProjectorParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCustomizableObjectProjector)              Value                                                       OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjector>)      RangeValues                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableModelParameterValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FMutableModelParameterProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EMutableParameterType)                     Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FMutableModelParameterValue>)       PossibleValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelImageProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FMutableModelImageProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TextureParameterName                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                Filter                                                      OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      SRGB                                                        OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      FlipGreenChannel                                            OFFSET(get<bool>, {0x14, 1, 1, 1})
	DMember(bool)                                      IsPassThrough                                               OFFSET(get<bool>, {0x14, 1, 1, 2})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TEnumAsByte<TextureGroup>)                 LODGroup                                                    OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    OFFSET(get<T>, {0x1D, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    OFFSET(get<T>, {0x1E, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSocket
/// Size: 0x0058 (0x000000 - 0x000058)
class FMutableRefSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  RelativeRotation                                            OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   RelativeScale                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bForceAlwaysAnimated                                        OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMutableRefLODInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ScreenSize                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LODHysteresis                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSupportUniformlyDistributedSampling                        OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowCPUAccess                                             OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODRenderData
/// Size: 0x0002 (0x000000 - 0x000002)
class FMutableRefLODRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsLODOptional                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bStreamedDataInlined                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMutableRefLODData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMutableRefLODInfo)                        LODInfo                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FMutableRefLODRenderData)                  RenderData                                                  OFFSET(getStruct<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefSkeletalMeshSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnablePerPolyCollision                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DefaultUVChannelDensity                                     OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefAssetUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UCustomizableObjectResourceDataContainer*) AssetUserData                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FMutableRefSkeletalMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SoftSkeletalMesh                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FMutableRefLODData>)                LODData                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 Sockets                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	SMember(FMutableRefSkeletalMeshSettings)           Settings                                                    OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostProcessAnimInst                                         OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(class UPhysicsAsset*)                      ShadowPhysicsAsset                                          OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<FMutableRefAssetUserData>)          AssetUserData                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAnimBpOverridePhysicsAssetsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   AnimInstanceClass                                           OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            SourceAsset                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableSkinWeightProfileInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableSkinWeightProfileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      DefaultProfile                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int8_t)                                    DefaultProfileFromLODIndex                                  OFFSET(get<int8_t>, {0x5, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetVertexData
/// Size: 0x001C (0x000000 - 0x00001C)
class FMorphTargetVertexData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector3f)                                 PositionDelta                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 TangentZDelta                                               OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(uint32_t)                                  MorphNameIndex                                              OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.ModelResources
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FModelResources : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TArray<FMutableRefSkeletalMeshData>)       ReferenceSkeletalMeshesData                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<USkeleton*>>)        Skeletons                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UMaterialInterface*>>) Materials                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UTexture*>>)         PassThroughTextures                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UPhysicsAsset*>>)    PhysicsAssets                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           AnimBPs                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FAnimBpOverridePhysicsAssetsInfo>)  AnimBpOverridePhysiscAssetsInfo                             OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FName>)                             MaterialSlotNames                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 SocketArray                                                 OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FMutableSkinWeightProfileInfo>)     SkinWeightProfilesInfo                                      OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FMutableModelImageProperties>)      ImageProperties                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           ParameterUIDataMap                                          OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           StateUIDataMap                                              OFFSET(get<T>, {0x110, 80, 0, 0})
	CMember(TArray<FName>)                             RealTimeMorphTargetNames                                    OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FMutableStreamableBlock>)           RealTimeMorphStreamableBlocks                               OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TMap<uint64_t, FMutableStreamableBlock>)   HashToStreamableBlock                                       OFFSET(get<T>, {0x180, 80, 0, 0})
	DMember(char)                                      NumComponents                                               OFFSET(get<char>, {0x1D0, 1, 0, 0})
	DMember(char)                                      NumLODs                                                     OFFSET(get<char>, {0x1D1, 1, 0, 0})
	DMember(char)                                      NumLODsToStream                                             OFFSET(get<char>, {0x1D2, 1, 0, 0})
	DMember(char)                                      FirstLODAvailable                                           OFFSET(get<char>, {0x1D3, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableStreamableBlock
/// Size: 0x0010 (0x000000 - 0x000010)
class FMutableStreamableBlock : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint32_t)                                  FileId                                                      OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Size                                                        OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint64_t)                                  Offset                                                      OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterUIData
/// Size: 0x0170 (0x000000 - 0x000170)
class FParameterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	CMember(EMutableParameterType)                     Type                                                        OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(TArray<FIntegerParameterUIData>)           ArrayIntegerParameterOption                                 OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(ECustomizableObjectGroupType)              IntegerParameterGroupType                                   OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(ETextureCompressionStrategy)               TextureCompressionStrategy                                  OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bDisableTextureStreaming                                    OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bLiveUpdateMode                                             OFFSET(get<bool>, {0x11B, 1, 0, 0})
	DMember(bool)                                      bReuseInstanceTextures                                      OFFSET(get<bool>, {0x11C, 1, 0, 0})
	CMember(TMap<FString, FString>)                    ForcedParameterValues                                       OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.IntegerParameterUIData
/// Size: 0x0100 (0x000000 - 0x000100)
class FIntegerParameterUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableParamUIMetadata
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMutableParamUIMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ObjectFriendlyName                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UISectionName                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   UIOrder                                                     OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UIThumbnail                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<FString, FString>)                    ExtraInformation                                            OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UObject*>>)   ExtraAssets                                                 OFFSET(get<T>, {0x98, 80, 0, 0})
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomizableObjectResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECOResourceDataType)                       Type                                                        OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FInstancedStruct)                          Data                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FCustomizableObjectAssetUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UAssetUserData*)                     AssetUserData                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedTexture
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeneratedTexture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeneratedMaterial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UMaterialInterface*)                 MaterialInterface                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 Textures                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseSkeletalMeshInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPendingReleaseSkeletalMeshInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    Timestamp                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.FParameterOptionsTags
/// Size: 0x0010 (0x000000 - 0x000010)
class FFParameterOptionsTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterTags
/// Size: 0x0060 (0x000000 - 0x000060)
class FParameterTags : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FFParameterOptionsTags>)     ParameterOptions                                            OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.ProfileParameterDat
/// Size: 0x0070 (0x000000 - 0x000070)
class FProfileParameterDat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProfileName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CompilationOptions
/// Size: 0x0048 (0x000000 - 0x000048)
class FCompilationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(ECustomizableObjectTextureCompression)     TextureCompression                                          OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   OptimizationLevel                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseDiskCompilation                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(uint64_t)                                  PackagedDataBytesLimit                                      OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  EmbeddedDataBytesLimit                                      OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectMeshToMeshVertData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     PositionBaryCoordsAndDist                                   OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     NormalBaryCoordsAndDist                                     OFFSET(get<float>, {0x10, 16, 0, 0})
	DMember(float)                                     TangentBaryCoordsAndDist                                    OFFSET(get<float>, {0x20, 16, 0, 0})
	DMember(uint16_t)                                  SourceMeshVertIndices                                       OFFSET(get<uint16_t>, {0x30, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   SourceAssetIndex                                            OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   SourceAssetLodIndex                                         OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableLODSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FMutableLODSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FPerPlatformInt)                           MinLOD                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       MinQualityLevelLOD                                          OFFSET(getStruct<T>, {0x8, 104, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectIdPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Guid                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.BakingConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
class FBakingConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   OutputPath                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   OutputFilesBaseName                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bExportAllResourcesOnBake                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bGenerateConstantMaterialInstancesOnBake                    OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bAllowOverridingOfFiles                                     OFFSET(get<bool>, {0x22, 1, 0, 0})
	SMember(FDelegateProperty)                         OnBakeOperationCompletedCallback                            OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
/// Size: 0x0128 (0x000000 - 0x000128)
class FCustomizableObjectInstanceDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UCustomizableObject*)                CustomizableObject                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        OFFSET(get<T>, {0xD8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjector
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FMultilayerProjector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersMapping                                        OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersOrder                                          OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FMultilayerProjectorLayer>)    DisableVirtualLayers                                        OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorLayer
/// Size: 0x0080 (0x000000 - 0x000080)
class FMultilayerProjectorLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/CustomizableObject.CustomizableObjectStreamedResourceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectStreamedResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UCustomizableObjectResourceDataContainer*>) ContainerPath                               OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(class UCustomizableObjectResourceDataContainer*) Container                                             OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseMaterialsInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FPendingReleaseMaterialsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TicksUntilRelease                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorVirtualLayer
/// Size: 0x0008 (0x000080 - 0x000088)
class FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/CustomizableObject.EPackageSaveResolutionType
/// Size: 0x05
enum class EPackageSaveResolutionType : uint8_t
{
	EPackageSaveResolutionType__None                                                 = 0,
	EPackageSaveResolutionType__NewFile                                              = 1,
	EPackageSaveResolutionType__Overriden                                            = 2,
	EPackageSaveResolutionType__UnableToOverride                                     = 3,
	EPackageSaveResolutionType__EPackageSaveResolutionType_MAX                       = 4
};

/// Enum /Script/CustomizableObject.EUpdateResult
/// Size: 0x08
enum class EUpdateResult : uint8_t
{
	EUpdateResult__Success                                                           = 0,
	EUpdateResult__Warning                                                           = 1,
	EUpdateResult__Error                                                             = 2,
	EUpdateResult__ErrorOptimized                                                    = 3,
	EUpdateResult__ErrorReplaced                                                     = 4,
	EUpdateResult__ErrorDiscarded                                                    = 5,
	EUpdateResult__Error16BitBoneIndex                                               = 6,
	EUpdateResult__EUpdateResult_MAX                                                 = 7
};

/// Enum /Script/CustomizableObject.EMutableParameterType
/// Size: 0x08
enum class EMutableParameterType : uint8_t
{
	EMutableParameterType__None                                                      = 0,
	EMutableParameterType__Bool                                                      = 1,
	EMutableParameterType__Int                                                       = 2,
	EMutableParameterType__Float                                                     = 3,
	EMutableParameterType__Color                                                     = 4,
	EMutableParameterType__Projector                                                 = 5,
	EMutableParameterType__Texture                                                   = 6,
	EMutableParameterType__EMutableParameterType_MAX                                 = 7
};

/// Enum /Script/CustomizableObject.ECustomizableObjectGroupType
/// Size: 0x05
enum class ECustomizableObjectGroupType : uint8_t
{
	ECustomizableObjectGroupType__COGT_TOGGLE                                        = 0,
	ECustomizableObjectGroupType__COGT_ALL                                           = 1,
	ECustomizableObjectGroupType__COGT_ONE                                           = 2,
	ECustomizableObjectGroupType__COGT_ONE_OR_NONE                                   = 3,
	ECustomizableObjectGroupType__COGT_MAX                                           = 4
};

/// Enum /Script/CustomizableObject.EMutableCompileMeshType
/// Size: 0x06
enum class EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full                                                    = 0,
	EMutableCompileMeshType__Local                                                   = 1,
	EMutableCompileMeshType__LocalAndChildren                                        = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren                                 = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren                                = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX                             = 5
};

/// Enum /Script/CustomizableObject.ECustomizableObjectProjectorType
/// Size: 0x04
enum class ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar                                         = 0,
	ECustomizableObjectProjectorType__Cylindrical                                    = 1,
	ECustomizableObjectProjectorType__Wrapping                                       = 2,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX           = 3
};

/// Enum /Script/CustomizableObject.ECustomizableObjectCompilationState
/// Size: 0x05
enum class ECustomizableObjectCompilationState : uint8_t
{
	ECustomizableObjectCompilationState__None                                        = 0,
	ECustomizableObjectCompilationState__InProgress                                  = 1,
	ECustomizableObjectCompilationState__Completed                                   = 2,
	ECustomizableObjectCompilationState__Failed                                      = 3,
	ECustomizableObjectCompilationState__ECustomizableObjectCompilationState_MAX     = 4
};

/// Enum /Script/CustomizableObject.ECOResourceDataType
/// Size: 0x03
enum class ECOResourceDataType : uint16_t
{
	ECOResourceDataType__None                                                        = 0,
	ECOResourceDataType__AssetUserData                                               = 1,
	ECOResourceDataType__ECOResourceDataType_MAX                                     = 2
};

/// Enum /Script/CustomizableObject.ECustomizableObjectNumBoneInfluences
/// Size: 0x04
enum class ECustomizableObjectNumBoneInfluences : uint8_t
{
	ECustomizableObjectNumBoneInfluences__Four                                       = 4,
	ECustomizableObjectNumBoneInfluences__Eight                                      = 8,
	ECustomizableObjectNumBoneInfluences__Twelve                                     = 12,
	ECustomizableObjectNumBoneInfluences__ECustomizableObjectNumBoneInfluences_MAX   = 13
};

/// Enum /Script/CustomizableObject.ECustomizableObjectTextureCompression
/// Size: 0x04
enum class ECustomizableObjectTextureCompression : uint8_t
{
	ECustomizableObjectTextureCompression__None                                      = 0,
	ECustomizableObjectTextureCompression__Fast                                      = 1,
	ECustomizableObjectTextureCompression__HighQuality                               = 2,
	ECustomizableObjectTextureCompression__ECustomizableObjectTextureCompression_MAX = 3
};

