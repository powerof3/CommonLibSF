#pragma once

#include "REX/BASE.h"

namespace REL
{
	void Write(void* a_dst, const void* a_src, const std::size_t a_size);
	void Write(const std::uintptr_t a_dst, const void* a_src, const std::size_t a_size);

	template <class T>
	void Write(void* a_dst, const std::span<T> a_src)
	{
		Write(a_dst, a_src.data(), a_src.size_bytes());
	}

	template <class T>
	void Write(const std::uintptr_t a_dst, const std::span<T> a_src)
	{
		Write(reinterpret_cast<void*>(a_dst), a_src.data(), a_src.size_bytes());
	}

	template <class T>
	void Write(const std::span<T> a_dst, const void* a_src)
	{
		Write(a_dst.data(), a_src, a_dst.size_bytes());
	}

	template <class T>
	void Write(const std::span<T> a_dst, const std::uintptr_t a_src)
	{
		Write(a_dst.data(), reinterpret_cast<void*>(a_src), a_dst.size_bytes());
	}

	template <class T>
	void WriteData(void* a_dst, const T& a_src)
	{
		Write(a_dst, std::addressof(a_src), sizeof(T));
	}

	template <class T>
	void WriteData(const std::uintptr_t a_dst, const T& a_src)
	{
		Write(reinterpret_cast<void*>(a_dst), std::addressof(a_src), sizeof(T));
	}

	template <class T1, class T2>
	void WriteData(const std::span<T1> a_dst, const T2& a_src)
	{
		Write(a_dst.data(), std::addressof(a_src), a_dst.size_bytes());
	}

	void WriteSafe(void* a_dst, const void* a_src, const std::size_t a_size);
	void WriteSafe(const std::uintptr_t a_dst, const void* a_src, const std::size_t a_size);
	void WriteSafeFill(void* a_dst, const std::uint8_t a_value, const std::size_t a_size);
	void WriteSafeFill(const std::uintptr_t a_dst, const std::uint8_t a_value, const std::size_t a_size);

	template <class T>
	void WriteSafe(void* a_dst, const std::span<T> a_src)
	{
		WriteSafe(a_dst, a_src.data(), a_src.size_bytes());
	}

	template <class T>
	void WriteSafe(const std::uintptr_t a_dst, const std::span<T> a_src)
	{
		WriteSafe(reinterpret_cast<void*>(a_dst), a_src.data(), a_src.size_bytes());
	}

	template <class T>
	void WriteSafe(const std::span<T> a_dst, const void* a_src)
	{
		WriteSafe(a_dst.data(), a_src, a_dst.size_bytes());
	}

	template <class T>
	void WriteSafe(const std::span<T> a_dst, const std::uintptr_t a_src)
	{
		WriteSafe(a_dst.data(), reinterpret_cast<void*>(a_src), a_dst.size_bytes());
	}

	template <class T>
	void WriteSafeData(void* a_dst, const T& a_src)
	{
		WriteSafe(a_dst, std::addressof(a_src), sizeof(T));
	}

	template <class T>
	void WriteSafeData(const std::uintptr_t a_dst, const T& a_src)
	{
		WriteSafe(reinterpret_cast<void*>(a_dst), std::addressof(a_src), sizeof(T));
	}

	template <class T1, class T2>
	void WriteSafeData(const std::span<T1> a_dst, const T2& a_src)
	{
		WriteSafe(a_dst.data(), std::addressof(a_src), a_dst.size_bytes());
	}
}
