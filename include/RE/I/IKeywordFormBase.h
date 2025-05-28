#pragma once

#include "RE/B/BSTSmartPointer.h"

namespace RE
{
	class BGSKeyword;
	class TBO_InstanceData;

	class IKeywordFormBase
	{
	public:
		SF_RTTI(IKeywordFormBase);

		virtual ~IKeywordFormBase();  // 00

		// add
		virtual bool HasKeywordImpl(const BGSKeyword* a_keyword, const BSTSmartPointer<TBO_InstanceData>& a_data);
		virtual void CollectAllKeywords(void* /* BSScrapArray<const BGSKeyword> */ a_refOutKeywordA, const TBO_InstanceData* a_data);
	};
}
