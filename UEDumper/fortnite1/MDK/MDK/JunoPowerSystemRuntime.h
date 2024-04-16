
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: JunoGameNative
/// dependency: ModularGameplay

/// Class /Script/JunoPowerSystemRuntime.JunoPowerBank
/// Size: 0x0010 (0x000EE0 - 0x000EF0)
class AJunoPowerBank : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3824;

public:
	CMember(class UJunoInventoryComponent*)            InventoryComponent                                          OFFSET(get<T>, {0xEE0, 8, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0xEE8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerBank.HandleInventoryChanged
	// void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);                           // [0xc833498] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerCenter
/// Size: 0x0030 (0x000EE0 - 0x000F10)
class AJunoPowerCenter : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3856;

public:
	CMember(class UJunoInventoryComponent*)            InventoryComponent                                          OFFSET(get<T>, {0xEE0, 8, 0, 0})
	CMember(class UFortWeaponItemDefinition*)          PowerItemDef                                                OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0xEF0, 8, 0, 0})
	SMember(FGuid)                                     CurrentPowerItemGUID                                        OFFSET(getStruct<T>, {0xEF8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.HandleInventoryChanged
	// void HandleInventoryChanged(TArray<UFortItem*>& AddedItems, TArray<UFortItem*>& RemovedItems);                           // [0xc8335ac] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetPowerConsumptionAmount
	// float GetPowerConsumptionAmount();                                                                                       // [0xc83345c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetPowerCapacityPercent
	// float GetPowerCapacityPercent();                                                                                         // [0xc83340c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetMaxPowerCapacity
	// float GetMaxPowerCapacity();                                                                                             // [0xc8333a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetCurrentPowerItemGUID
	// FGuid GetCurrentPowerItemGUID();                                                                                         // [0xc833388] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerCenter.GetCurrentPowerCapacity
	// float GetCurrentPowerCapacity();                                                                                         // [0xc8332c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoPowerConsumerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FScalableFloat)                            PowerRequired                                               OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ConsumptionInterval                                         OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ConsumerChannelTags                                         OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	CMember(class UJunoPowerManagerComponent*)         PowerManager                                                OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.RemovePowerChannel
	// void RemovePowerChannel(FGameplayTag Channel);                                                                           // [0xc833914] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.RegisterPowerConsumer
	// void RegisterPowerConsumer(FGameplayTagContainer Channels);                                                              // [0xc833814] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.OnDetached
	// void OnDetached();                                                                                                       // [0xc833784] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.OnAttached
	// void OnAttached(FGraphIslandHandle& IslandHandle);                                                                       // [0xc8336e4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.HasPower
	// bool HasPower();                                                                                                         // [0xc8336c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.ConsumePower
	// bool ConsumePower();                                                                                                     // [0xc833228] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent.AddPowerChannel
	// void AddPowerChannel(FGameplayTag Channel);                                                                              // [0xc833168] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UJunoPowerManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnStartConsumingPowerEvent                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopConsumingPowerEvent                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoPowerCenter*>>) AttachedPowerCenters                                        OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoPowerBank*>>)   AttachedPowerBanks                                          OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FConsumerChannelPowerInfo>)         ConsumerChannelPowers                                       OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoPowerCenter*>)         CurrentPowerCenter                                          OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bIsConsumingPower                                           OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnStopConsumingPower__DelegateSignature
	// void OnStopConsumingPower__DelegateSignature();                                                                          // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnStartConsumingPower__DelegateSignature
	// void OnStartConsumingPower__DelegateSignature();                                                                         // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnRep_IsConsumingPower
	// void OnRep_IsConsumingPower();                                                                                           // [0xc8337ac] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.OnRep_AttachedPowerCenters
	// void OnRep_AttachedPowerCenters();                                                                                       // [0xc833798] Final|Native|Private 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetRemainingPowerItemsCount
	// int32_t GetRemainingPowerItemsCount();                                                                                   // [0xc833474] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetPowerCenterInUse
	// class AJunoPowerCenter* GetPowerCenterInUse();                                                                           // [0xc833434] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerItemsCount
	// int32_t GetMaxPowerItemsCount();                                                                                         // [0x64a3bb4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerItemDurability
	// float GetMaxPowerItemDurability();                                                                                       // [0xc8333e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetMaxPowerCapacity
	// float GetMaxPowerCapacity();                                                                                             // [0xc8333cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerItemDurability
	// float GetCurrentPowerItemDurability();                                                                                   // [0xc833360] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerItem
	// class UFortWorldItem* GetCurrentPowerItem();                                                                             // [0xc83333c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerCapacityPercent
	// float GetCurrentPowerCapacityPercent();                                                                                  // [0xc833314] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetCurrentPowerCapacity
	// float GetCurrentPowerCapacity();                                                                                         // [0xc8332ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent.GetAttachedPowerConsumerInfo
	// TArray<FConsumerChannelPowerInfo> GetAttachedPowerConsumerInfo();                                                        // [0xc83324c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoPowerSystemRuntime.JunoPowerSystemLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPowerSystemLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/JunoPowerSystemRuntime.ConsumerChannelPowerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FConsumerChannelPowerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Channel                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Power                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

