
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicMediaBasePlayer
/// dependency: MediaAssets
/// dependency: UMG

/// Class /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetConfig
/// Size: 0x0028 (0x000028 - 0x000050)
class UEpicMediaVideoWidgetConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   MediaID                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   MediaName                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(char)                                      PerfControl                                                 OFFSET(get<char>, {0x48, 1, 0, 0})
	DMember(bool)                                      bAllowSkipping                                              OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bHoldToSkip                                                 OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bHideControls                                               OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bNoAudio                                                    OFFSET(get<bool>, {0x4E, 1, 0, 0})
};

/// Class /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase
/// Size: 0x00A8 (0x000408 - 0x0004B0)
class UEpicMediaVideoWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(class UEpicBaseStreamingVideo*)            BasePlayer                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UEpicMediaVideoWidgetConfig*)        Config                                                      OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressToSkipAction                                           OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Skip                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UImage*)                             Image_Throbber                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class USoundMix*)                          ActiveSoundMix                                              OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSubmix                                               OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class USoundClass*)                        SoundClass                                                  OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSubmix                                              OFFSET(get<T>, {0x488, 8, 0, 0})
	DMember(bool)                                      bAutoBroadcastRebuild                                       OFFSET(get<bool>, {0x490, 1, 0, 0})


	/// Functions
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.TerminalError
	// void TerminalError(EBaseMediaTerminalErrorReason Reason);                                                                // [0xa8c47d0] Native|Protected     
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.Stop
	// void Stop();                                                                                                             // [0x81cb054] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.SetConfig
	// bool SetConfig(class UEpicMediaVideoWidgetConfig* InConfig);                                                             // [0xa8c473c] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.Play
	// void Play();                                                                                                             // [0x3da9d40] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.MetadataSuccess
	// void MetadataSuccess();                                                                                                  // [0x8d7e180] Native|Protected     
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.MediaEnded
	// void MediaEnded();                                                                                                       // [0x402e5f8] Final|Native|Private 
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.Init
	// bool Init();                                                                                                             // [0xa8c4714] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase.GetBasePlayer
	// class UEpicBaseStreamingVideo* GetBasePlayer();                                                                          // [0x90a9e1c] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/EpicMediaVideoWidgetBase.VideoWidgetPerfControl
/// Size: 0x05
enum class VideoWidgetPerfControl : uint8_t
{
	VideoWidgetPerfControl__None                                                     = 0,
	VideoWidgetPerfControl__WorldRendering                                           = 1,
	VideoWidgetPerfControl__ShaderCache                                              = 2,
	VideoWidgetPerfControl__PhysicalSizeLimit                                        = 3,
	VideoWidgetPerfControl__GarbageCollection                                        = 4
};

