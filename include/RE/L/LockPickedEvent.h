#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/E/ExtraLock.h"
#include "RE/N/NiSmartPointer.h"

namespace RE
{
	class TESObjectREFR;
	class BGSTerminalMenu;

	struct LockPickedEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<LockPickedEvent>* GetEventSource()
		{
			using func_t = decltype(&LockPickedEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::LockPickedEvent::GetEventSource };
			return func();
		}
		// members
		NiPointer<TESObjectREFR>             actionRef;         // 00
		NiPointer<TESObjectREFR>             lock;              // 08
		BGSTerminalMenu*                     terminalMenu;      // 10
		std::int32_t                         unk18;             // 14 - terminalMenu related
		std::uint32_t                        numDigiPicksUsed;  // 18
		float                                unk20;             // 20 - 0.0f
		float                                unk24;             // 24 - 0.0f
		REX::Enum<LOCK_LEVEL, std::uint32_t> lockLevel;         // 28
		bool                                 succeeded;         // 2C
		bool                                 isOffLimits;       // 2D
	};
	static_assert(sizeof(LockPickedEvent) == 0x30);
}
