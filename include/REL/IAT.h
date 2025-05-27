#pragma once

#include "REX/BASE.h"

#include "REX/REX/CAST.h"
#include "REX/W32/BASE.h"

namespace REL
{
	[[nodiscard]] std::uintptr_t GetIATAddr(std::string_view a_dll, std::string_view a_function);
	[[nodiscard]] std::uintptr_t GetIATAddr(REX::W32::HMODULE a_module, std::string_view a_dll, std::string_view a_function);

	[[nodiscard]] void* GetIATPtr(std::string_view a_dll, std::string_view a_function);

	template <class T>
	[[nodiscard]] T* GetIATPtr(std::string_view a_dll, std::string_view a_function)
	{
		return static_cast<T*>(GetIATPtr(std::move(a_dll), std::move(a_function)));
	}

	[[nodiscard]] void* GetIATPtr(REX::W32::HMODULE a_module, std::string_view a_dll, std::string_view a_function);

	template <class T>
	[[nodiscard]] T* GetIATPtr(REX::W32::HMODULE a_module, std::string_view a_dll, std::string_view a_function)
	{
		return static_cast<T*>(GetIATPtr(a_module, std::move(a_dll), std::move(a_function)));
	}

	std::uintptr_t PatchIAT(std::uintptr_t a_newFunc, std::string_view a_dll, std::string_view a_function);

	template <class F>
	std::uintptr_t PatchIAT(F a_newFunc, std::string_view a_dll, std::string_view a_function)
	{
		return PatchIAT(REX::UNRESTRICTED_CAST<std::uintptr_t>(a_newFunc), a_dll, a_function);
	}
}
