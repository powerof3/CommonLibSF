#pragma once

#include "SFSE/Interfaces.h"

#define SFSEAPI __cdecl

namespace RE::BSScript
{
	class IVirtualMachine;
}

namespace SFSE
{
	struct InitInfo
	{
		bool        log{ true };
		const char* logName{ nullptr };
		const char* logPattern{ nullptr };
		bool        trampoline{ false };
		std::size_t trampolineSize{ 0 };
		bool        hook{ true };
	};

	void Init(const PreLoadInterface* a_intfc, InitInfo a_info = {}) noexcept;
	void Init(const LoadInterface* a_intfc, InitInfo a_info = {}) noexcept;

	void RegisterForAPIInitEvent(const std::function<void()>& a_fn);

	[[nodiscard]] std::string_view  GetPluginName() noexcept;
	[[nodiscard]] std::string_view  GetPluginAuthor() noexcept;
	[[nodiscard]] REL::Version      GetPluginVersion() noexcept;
	[[nodiscard]] PluginHandle      GetPluginHandle() noexcept;
	[[nodiscard]] const PluginInfo* GetPluginInfo(std::string_view a_plugin) noexcept;
	[[nodiscard]] std::uint32_t     GetSFSEVersion() noexcept;

	[[nodiscard]] const TrampolineInterface* GetTrampolineInterface() noexcept;
	[[nodiscard]] const MessagingInterface*  GetMessagingInterface() noexcept;
	[[nodiscard]] const MenuInterface*       GetMenuInterface() noexcept;
	[[nodiscard]] const TaskInterface*       GetTaskInterface() noexcept;
}

namespace SFSE
{
	// DEPRECATED
	void Init(const LoadInterface* a_intfc, bool a_log) noexcept;
	// DEPRECATED
	void AllocTrampoline(std::size_t a_size, bool a_trySFSEReserve = true) noexcept;
}
