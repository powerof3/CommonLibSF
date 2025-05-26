#pragma once

namespace RE::ID
{
	namespace Actor
	{
		inline constexpr REL::ID EvaluatePackage{ 0 };          // 150640
		inline constexpr REL::ID GetActorKnowledge{ 0 };        // 150669
		inline constexpr REL::ID IsHostileToActor{ 0 };         // 150777
		inline constexpr REL::ID IsJumping{ 0 };                // 150985
		inline constexpr REL::ID IsOverEncumbered{ 0 };         // 150999
		inline constexpr REL::ID IsSneaking{ 0 };               // 151014
		inline constexpr REL::ID SetSkinTone{ 0 };              // 146270
		inline constexpr REL::ID UpdateAppearance{ 0 };         // 151216
		inline constexpr REL::ID UpdateChargenAppearance{ 0 };  // 146273
	}

	namespace ActorUtils
	{
		inline constexpr REL::ID ChangeAnimArchetype{ 0 };  // 150497
	}

	namespace ActorValue
	{
		inline constexpr REL::ID GetSingleton{ 0 };  // 36266
	}

	namespace ActorEquipManager
	{
		inline constexpr REL::ID Singleton{ 0 };      // 879425
		inline constexpr REL::ID EquipObject{ 0 };    // 151991
		inline constexpr REL::ID UnequipObject{ 0 };  // 152007
	}

	namespace BaseExtraList
	{
		inline constexpr REL::ID AddExtra{ 0 };   // 83084
		inline constexpr REL::ID GetByType{ 0 };  // 83208
	}

	namespace BGSDefaultObjectManager
	{
		inline constexpr REL::ID DefaultObjectData{ 0 };  // 761776
		inline constexpr REL::ID GetSingleton{ 0 };       // 82283
	}

	namespace BGSEditorID
	{
		inline constexpr REL::ID Register{ 0 };  // 86172
	}

	namespace BGSEntryPoint
	{
		inline constexpr REL::ID HandleEntryPoint{ 0 };  // 110912
	}

	namespace BGSInventoryInterface
	{
		inline constexpr REL::ID Singleton{ 0 };           // 825787
		inline constexpr REL::ID GetInventoryObject{ 0 };  // 87520
	}

	namespace BGSObjectInstance
	{
		inline constexpr REL::ID ctor{ 0 };  // 101725
	}

	namespace BGSSaveLoadFileEntry
	{
		inline constexpr REL::ID LoadData{ 0 };  // 147331
	}

	namespace BGSSaveLoadGame
	{
		inline constexpr REL::ID SaveGame{ 0 };  // 147515
		inline constexpr REL::ID LoadGame{ 0 };  // 147564
	}

	namespace BGSSaveLoadManager
	{
		inline constexpr REL::ID DeleteSaveFile{ 0 };          // 147844
		inline constexpr REL::ID QueueBuildSaveGameList{ 0 };  // 147900
		inline constexpr REL::ID QueueSaveLoadTask{ 0 };       // 1536882
		inline constexpr REL::ID Singleton{ 0 };               // 880997
	}

	namespace BGSStoryTeller
	{
		inline constexpr REL::ID Singleton{ 0 };  // 878850
	}

	namespace BSInputEnableLayer
	{
		inline constexpr REL::ID SetUserFlags{ 0 };   // 106486
		inline constexpr REL::ID SetOtherFlags{ 0 };  // 109447
	}

	namespace BSInputEnableManager
	{
		inline constexpr REL::ID CreateLayer{ 0 };  // 179101
		inline constexpr REL::ID Singleton{ 0 };    // 878792
	}

	namespace BSLog
	{
		inline constexpr REL::ID ctor{ 0 };               // 184813
		inline constexpr REL::ID dtor{ 0 };               // 184816
		inline constexpr REL::ID CycleLog{ 0 };           // 184822
		inline constexpr REL::ID FlushBuffer{ 0 };        // 184823
		inline constexpr REL::ID FlushBufferToFile{ 0 };  // 184824
		inline constexpr REL::ID GenerateTimeStamp{ 0 };  // 184825
		inline constexpr REL::ID MakeLogFilename{ 0 };    // 184826
		inline constexpr REL::ID WriteData{ 0 };          // 184832
		inline constexpr REL::ID WriteEntry{ 0 };         // 184833
	}

	namespace BSNonReentrantSpinLock
	{
		inline constexpr REL::ID lock{ 0 };      // 73879
		inline constexpr REL::ID try_lock{ 0 };  // 74235
		inline constexpr REL::ID unlock{ 0 };    // 73895
	}

	namespace BSPointerHandleManagerInterface
	{
		inline constexpr REL::ID GetSmartPointer{ 0 };  // 72432
	}

	namespace BSReadWriteLock
	{
		inline constexpr REL::ID lock_read{ 0 };     // 178605
		inline constexpr REL::ID lock_write{ 0 };    // 34125
		inline constexpr REL::ID unlock_read{ 0 };   // 178609
		inline constexpr REL::ID unlock_write{ 0 };  // 34257
	}

	namespace BSScript
	{
		namespace Array
		{
			inline constexpr REL::ID ctor{ 0 };  // 196577
			inline constexpr REL::ID dtor{ 0 };  // 196579
		}

		namespace Object
		{
			inline constexpr REL::ID ctor{ 0 };       // 196025
			inline constexpr REL::ID dtor{ 0 };       // 196032
			inline constexpr REL::ID GetHandle{ 0 };  // 196069
			inline constexpr REL::ID SetHandle{ 0 };  // 196079
			inline constexpr REL::ID IncRef{ 0 };     // 37879
			inline constexpr REL::ID DecRef{ 0 };     // 196057
		}

		namespace ObjectBindPolicy
		{
			inline constexpr REL::ID BindObject{ 0 };  // 195981
		}

		namespace ObjectTypeInfo
		{
			inline constexpr REL::ID ctor{ 0 };                // 197047
			inline constexpr REL::ID dtor{ 0 };                // 196202
			inline constexpr REL::ID Clear{ 0 };               // 196218
			inline constexpr REL::ID CopyFromLinkedData{ 0 };  // 196219
			inline constexpr REL::ID GetProperty{ 0 };         // 196241
		}

		namespace Stack
		{
			inline constexpr REL::ID ctor{ 0 };                   // 196325
			inline constexpr REL::ID dtor{ 0 };                   // 196333
			inline constexpr REL::ID GetStackFrameVariable{ 0 };  // 196367
			inline constexpr REL::ID GetPageForFrame{ 0 };        // 196366
		}

		namespace Internal
		{
			namespace NF_util
			{
				namespace NativeFunctionBase
				{
					inline constexpr REL::ID Invoke{ 0 };        // 196401
					inline constexpr REL::ID GetParam{ 0 };      // 196404
					inline constexpr REL::ID Unk_10{ 0 };        // 196407
					inline constexpr REL::ID GetParamInfo{ 0 };  // 196409
					inline constexpr REL::ID Unk_15{ 0 };        // 196408
				}
			}
		}
	}

	namespace BSSpinLock
	{
		inline constexpr REL::ID lock{ 0 };      // 178543
		inline constexpr REL::ID try_lock{ 0 };  // 178545
		inline constexpr REL::ID unlock{ 0 };    // 178544
	}

	namespace BSStringPool
	{
		namespace Entry
		{
			inline constexpr REL::ID release{ 0 };  // 36754
		}

		namespace BucketTable
		{
			inline constexpr REL::ID GetSingleton{ 0 };  // 198241
		}

		inline constexpr REL::ID GetEntry_char_{ 0 };     // 198219
		inline constexpr REL::ID GetEntry_wchar_t_{ 0 };  // 198220
	}

	namespace BSStorage
	{
		inline constexpr REL::ID FlushStreamBuffer{ 0 };    // 72433
		inline constexpr REL::ID PrepareStreamBuffer{ 0 };  // 72461
		inline constexpr REL::ID WriteString{ 0 };          // 87863
	}

	namespace BSSystemFile
	{
		inline constexpr REL::ID ctor{ 0 };            // 198445
		inline constexpr REL::ID dtor{ 0 };            // 198446
		inline constexpr REL::ID DoClose{ 0 };         // 198452
		inline constexpr REL::ID DeleteFileA{ 0 };     // 198451
		inline constexpr REL::ID DoOpen{ 0 };          // 198454
		inline constexpr REL::ID DoSeek{ 0 };          // 198456
		inline constexpr REL::ID DoSetEndOfFile{ 0 };  // 198457
		inline constexpr REL::ID Flush{ 0 };           // 78151
		inline constexpr REL::ID GetSize{ 0 };         // 85176
		inline constexpr REL::ID Read{ 0 };            // 75362
		inline constexpr REL::ID RenameFile{ 0 };      // 198459
		inline constexpr REL::ID Truncate{ 0 };        // 195959
		inline constexpr REL::ID Write{ 0 };           // 75363
		inline constexpr REL::ID operatorEqCopy{ 0 };  // 198448
	}

	namespace BSTEventSource
	{
		inline constexpr REL::ID Notify{ 0 };          // 178573
		inline constexpr REL::ID RegisterSink{ 0 };    // 34452
		inline constexpr REL::ID UnregisterSink{ 0 };  // 34451
	}

	namespace BSTHeapSTLAllocatorBase
	{
		inline constexpr REL::ID allocate{ 0 };    // 34039
		inline constexpr REL::ID deallocate{ 0 };  // 34440
	}

	namespace Calendar
	{
		inline constexpr REL::ID Singleton{ 0 };  // 878435
	}

	namespace ConsoleLog
	{
		inline constexpr REL::ID Singleton{ 938104 };
		inline constexpr REL::ID AddString{ 113649 };
		inline constexpr REL::ID Print{ 113647 };
	}

	namespace ExtraDataList
	{
		inline constexpr REL::ID HasQuestObjectAlias{ 0 };  // 83336
		inline constexpr REL::ID HasType{ 0 };              // 83208
	}

	namespace FORM_ENUM_STRING
	{
		inline constexpr REL::ID FormEnumString{ 0 };  // 761416
	}

	namespace GameMenuBase
	{
		inline constexpr REL::ID Ctor{ 0 };  // 130577
	}

	namespace GameScript
	{
		namespace RemoteDebugger
		{
			inline constexpr REL::ID HandleContinueRequest{ 0 };        // 167579
			inline constexpr REL::ID HandleDisconnectRequest{ 0 };      // 167580
			inline constexpr REL::ID HandlePauseRequest{ 0 };           // 167581
			inline constexpr REL::ID HandleSetBreakpointsRequest{ 0 };  // 167582
			inline constexpr REL::ID HandleStackTraceRequest{ 0 };      // 167583
			inline constexpr REL::ID HandleThreadsRequest{ 0 };         // 167584
			inline constexpr REL::ID HandleValueRequest{ 0 };           // 167585
			inline constexpr REL::ID HandleVariablesRequest{ 0 };       // 167586
			inline constexpr REL::ID HandleStepRequest{ 0 };            // 167587
		}
	}

	namespace GameSettingCollection
	{
		inline constexpr REL::ID Singleton{ 0 };   // 879099
		inline constexpr REL::ID GetSetting{ 0 };  // 88638
	}

	namespace GameVM
	{
		inline constexpr REL::ID Singleton{ 0 };               // 878371
		inline constexpr REL::ID BindEverythingToScript{ 0 };  // 171438
	}

	namespace idLogging
	{
		inline constexpr REL::ID Singleton{ 0 };  // 895197
	}

	namespace idTCP
	{
		inline constexpr REL::ID Accept{ 0 };  // 211257
		inline constexpr REL::ID Close{ 0 };   // 211258
		inline constexpr REL::ID Listen{ 0 };  // 211259
		inline constexpr REL::ID Read{ 0 };    // 211264
		inline constexpr REL::ID Write{ 0 };   // 211266
	}

	namespace INIPrefSettingCollection
	{
		inline constexpr REL::ID Singleton{ 0 };  // 885866
	}

	namespace INISettingCollection
	{
		inline constexpr REL::ID Singleton{ 0 };  // 885862
	}

	namespace InputEnableLayer
	{
		inline constexpr REL::ID Free{ 0 };  // 36626
	}

	namespace LockPickedEvent
	{
		inline constexpr REL::ID GetEventSource{ 0 };  // 107115
		inline constexpr REL::ID Notify{ 0 };          // 107339
	}

	namespace Main
	{
		inline constexpr REL::ID Singleton{ 883591 };
		inline constexpr REL::ID WorldRoot{ 0 };  // 887308
	}

	namespace msvc
	{
		namespace type_info
		{
			inline constexpr REL::ID name{ 0 };       // 248847
			inline constexpr REL::ID _RootNode{ 0 };  // 824582
			inline constexpr REL::ID compare{ 0 };    // 248848
		}
	}

	namespace MemoryManager
	{
		namespace AutoScrapBuffer
		{
			inline constexpr REL::ID ctor{ 0 };  // 178513
			inline constexpr REL::ID dtor{ 0 };  // 178516
		}

		inline constexpr REL::ID GetSingleton{ 0 };        // 33961
		inline constexpr REL::ID Allocate{ 0 };            // 33962
		inline constexpr REL::ID Free{ 0 };                // 34032
		inline constexpr REL::ID GetThreadScrapHeap{ 0 };  // 36848
	}

	namespace MenuTopicManager
	{
		inline constexpr REL::ID Singleton{ 0 };  // 879316
	}

	namespace Misc
	{
		inline constexpr REL::ID DebugNotification{ 0 };        // 138728
		inline constexpr REL::ID LookupReferenceByHandle{ 0 };  // 72986
		inline constexpr REL::ID PlayMenuSound{ 0 };            // 167344
	}

	namespace NiCamera
	{
		inline constexpr REL::ID WorldToScreenInternal{ 0 };  // 210415
	}

	namespace NiMatrix3
	{
		inline constexpr REL::ID ToEulerAnglesXYZ{ 0 };  // 210095
	}

	namespace PlayerCamera
	{
		inline constexpr REL::ID Singleton{ 0 };         // 878523
		inline constexpr REL::ID ForceFirstPerson{ 0 };  // 166029
		inline constexpr REL::ID ForceThirdPerson{ 0 };  // 166031
		inline constexpr REL::ID SetCameraState{ 0 };    // 166078
		inline constexpr REL::ID QCameraEquals{ 0 };     // 166081
	}

	namespace PlayerCharacter
	{
		inline constexpr REL::ID Singleton{ 0 };  // 865059
	}

	namespace ProcessLists
	{
		inline constexpr REL::ID AreHostileActorsNear{ 0 };  // 154040
		inline constexpr REL::ID Singleton{ 0 };             // 878338
		inline constexpr REL::ID ToggleAI{ 0 };              // 154056
	}

	namespace REFR_LOCK
	{
		inline constexpr REL::ID GetLockLevel{ 0 };  // 84103
	}

	namespace RegSettingCollection
	{
		inline constexpr REL::ID Singleton{ 0 };  // 885510
	}

	namespace Scaleform
	{
		namespace GFx
		{
			namespace Value
			{
				namespace ObjectInterface
				{
					inline constexpr REL::ID ObjectAddRef{ 0 };          // 57288
					inline constexpr REL::ID ObjectRelease{ 0 };         // 57289
					inline constexpr REL::ID HasMember{ 0 };             // 57290
					inline constexpr REL::ID GetMember{ 0 };             // 57291
					inline constexpr REL::ID SetMember{ 0 };             // 1867815
					inline constexpr REL::ID Invoke{ 0 };                // 1867816
					inline constexpr REL::ID VisitMembers{ 0 };          // 57296
					inline constexpr REL::ID GetArraySize{ 0 };          // 57297
					inline constexpr REL::ID SetArraySize{ 0 };          // 57298
					inline constexpr REL::ID GetElement{ 0 };            // 57299
					inline constexpr REL::ID SetElement{ 0 };            // 57300
					inline constexpr REL::ID VisitElements{ 0 };         // 57301
					inline constexpr REL::ID PushBack{ 0 };              // 57303
					inline constexpr REL::ID PopBack{ 0 };               // 57304
					inline constexpr REL::ID RemoveElements{ 0 };        // 57305
					inline constexpr REL::ID GetParent{ 0 };             // 57314
					inline constexpr REL::ID GetText{ 0 };               // 57324
					inline constexpr REL::ID SetText{ 0 };               // 57325
					inline constexpr REL::ID SetTextW{ 0 };              // 57326
					inline constexpr REL::ID CreateEmptyMovieClip{ 0 };  // 57327
					inline constexpr REL::ID GotoAndPlayL{ 0 };          // 57329
					inline constexpr REL::ID GotoAndPlay{ 0 };           // 57330
				}
			}
		}

		namespace MemoryHeapPT
		{
			inline constexpr REL::ID Singleton{ 0 };  // 820297
		}
	}

	namespace ScrapHeap
	{
		inline constexpr REL::ID Allocate{ 0 };    // 34432
		inline constexpr REL::ID Deallocate{ 0 };  // 37624
	}

	namespace Script
	{
		inline constexpr REL::ID GetConsoleCommands{ 0 };  // 841465
		inline constexpr REL::ID GetScriptCommands{ 0 };   // 841467
	}

	namespace SWFToCodeFunctionHandler
	{
		inline constexpr REL::ID RegisterNativeFunction{ 0 };  // 187274
	}

	namespace TES
	{
		inline constexpr REL::ID GetDeadCount{ 0 };  // 84704
		inline constexpr REL::ID Singleton{ 0 };     // 881024
	}

	namespace TESActorBaseData
	{
		inline constexpr REL::ID GetLevel{ 0 };                // 85868
		inline constexpr REL::ID GetUsesLeveledTemplate{ 0 };  // 85873
	}

	namespace TESCellFullyLoadedEvent
	{
		inline constexpr REL::ID GetEventSource{ 0 };  // 107143
	}

	namespace TESCondition
	{
		inline constexpr REL::ID CheckValue{ 0 };  // 116112
	}

	namespace TESConditionItem
	{
		inline constexpr REL::ID IsTrue{ 0 };  // 116127
	}

	namespace TESContainer
	{
		inline constexpr REL::ID AddObjectToContainer{ 0 };  // 85991
	}

	namespace TESContainerChangedEvent
	{
		inline constexpr REL::ID GetEventSource{ 0 };  // 107155
	}

	namespace TESDataHandler
	{
		inline constexpr REL::ID Singleton{ 0 };  // 825890
	}

	namespace TESDeathEvent
	{
		inline constexpr REL::ID GetEventSource{ 0 };  // 107156
	}

	namespace TESForm
	{
		inline constexpr REL::ID DecExternalRefCount{ 0 };  // 34165
		inline constexpr REL::ID DecRefCount{ 0 };          // 35164
		inline constexpr REL::ID LookupByID{ 0 };           // 86125
		inline constexpr REL::ID LookupByEditorID{ 0 };     // 86123
	}

	namespace TESNPC
	{
		inline constexpr REL::ID CopyAppearance{ 0 };                 // 111992
		inline constexpr REL::ID DeriveGeneticParentAppearance{ 0 };  // 112005
	}

	namespace TESNPCData
	{
		namespace ChargenDataModel
		{
			inline constexpr REL::ID Singleton{ 0 };  // 879332
			inline constexpr REL::ID Update{ 0 };     // 100686
		}
	}

	namespace TESObjectARMO
	{
		inline constexpr REL::ID CanUseArmor{ 0 };  // 103501
	}

	namespace TESObjectLoadedEvent
	{
		inline constexpr REL::ID GetEventSource{ 0 };  // 107177
	}

	namespace TESObjectREFR
	{
		inline constexpr REL::ID ActivateRef{ 0 };             // 106374
		inline constexpr REL::ID AddLockChange{ 0 };           // 106386
		inline constexpr REL::ID GetCalcLevel{ 0 };            // 107531
		inline constexpr REL::ID GetCurrentLocation{ 0 };      // 106554
		inline constexpr REL::ID GetDistance{ 0 };             // 106562
		inline constexpr REL::ID GetLinkedRef{ 0 };            // 107578
		inline constexpr REL::ID GetLock{ 0 };                 // 107581
		inline constexpr REL::ID GetParentWorldSpace{ 0 };     // 106696
		inline constexpr REL::ID GetScale{ 0 };                // 106658
		inline constexpr REL::ID GetSpaceship{ 0 };            // 173851
		inline constexpr REL::ID GetSpaceshipParentDock{ 0 };  // 174134
		inline constexpr REL::ID GetSpaceshipPilot{ 0 };       // 173834
		inline constexpr REL::ID GetValue{ 0 };                // 107605
		inline constexpr REL::ID HasKeyword{ 0 };              // 80343
		inline constexpr REL::ID IsCrimeToActivate{ 0 };       // 106755
		inline constexpr REL::ID IsInSpace{ 0 };               // 106767
		inline constexpr REL::ID IsObjectEquipped{ 0 };        // 106991
		inline constexpr REL::ID IsSpaceshipDocked{ 0 };       // 174146
		inline constexpr REL::ID IsSpaceshipLanded{ 0 };       // 173880
		inline constexpr REL::ID WornHasKeyword{ 0 };          // 106992
	}

	namespace TESQuest
	{
		inline constexpr REL::ID IsStageDone{ 0 };  // 112585
	}

	namespace TESWorldSpace
	{
		inline constexpr REL::ID GetLocationFromCoordinates{ 0 };  // 107914
	}

	namespace UI
	{
		inline constexpr REL::ID Singleton{ 0 };   // 878339
		inline constexpr REL::ID IsMenuOpen{ 0 };  // 1870208
	}

	namespace UIMessageQueue
	{
		inline constexpr REL::ID Singleton{ 0 };   // 878637
		inline constexpr REL::ID AddMessage{ 0 };  // 187268
	}

	// global functions/ ids
	inline constexpr REL::ID RTDynamicCast{ 184372 };

	// idCoreSocket functions
	inline constexpr REL::ID NET_ErrorString{ 0 };      // 211261
	inline constexpr REL::ID Net_SockadrToNetadr{ 0 };  // 211262
	inline constexpr REL::ID NET_WaitForData{ 0 };      // 211263
	inline constexpr REL::ID Sys_InitNetworking{ 0 };   // 211265
}
