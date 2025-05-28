#include "RE/E/ExtraLock.h"
#include "RE/G/GameSettingCollection.h"
#include "RE/P/PlayerCharacter.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	LOCK_LEVEL REFR_LOCK::GetLockLevel(const TESObjectREFR* a_owner) const
	{
		auto        cBaseLevel = baseLevel;
		static auto iLockLevelMaxImpossible = GameSettingCollection::GetSingleton()->GetSetting("iLockLevelMaxImpossible");

		if (cBaseLevel == iLockLevelMaxImpossible->GetInt() || flags.none(Flag::kLeveled)) {
			return NumericValueToEnum(cBaseLevel);
		}

		std::uint16_t calcLevel;
		if (a_owner) {
			calcLevel = a_owner->GetCalcLevel(false);
		} else {
			calcLevel = RE::PlayerCharacter::GetSingleton()->GetNPC()->GetLevel();
		}

		static auto fLeveledLockMult = GameSettingCollection::GetSingleton()->GetSetting("fLeveledLockMult");
		cBaseLevel += static_cast<std::uint8_t>(calcLevel * fLeveledLockMult->GetFloat());

		return NumericValueToEnum(cBaseLevel > 99 ? 99 : cBaseLevel);
	}

	void REFR_LOCK::SetLocked(bool a_locked)
	{
		flags.set(a_locked, Flag::kLocked);
		if (!a_locked)
			numTries = 0;
	}

	LOCK_LEVEL RE::REFR_LOCK::NumericValueToEnum(std::int32_t a_value)
	{
		using func_t = decltype(&REFR_LOCK::NumericValueToEnum);
		static REL::Relocation<func_t> func{ ID::REFR_LOCK::NumericValueToEnum };
		return func(a_value);
	}
}
