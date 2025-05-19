#pragma once

#include <REX/Impl/PCH.h>

#define AsAddress(ptr) std::bit_cast<std::uintptr_t>(ptr)
#define AsPointer(addr) std::bit_cast<void*>(addr)
#define stl_assert(cond, ...)                                     \
	{                                                             \
		if (!((cond))) {                                          \
			SFSE::stl::report_and_fail(std::format(__VA_ARGS__)); \
		}                                                         \
	}

namespace SFSE
{
	using namespace std::literals;
	namespace stl = XSE::stl;
}

namespace RE
{
	using namespace std::literals;
	namespace stl = SFSE::stl;
}

#include "RE/IDs.h"
#include "RE/IDs_NiRTTI.h"
#include "RE/IDs_RTTI.h"
#include "RE/IDs_VTABLE.h"

#include "RE/M/msvc.h"

#undef cdecl  // Workaround for Clang.
