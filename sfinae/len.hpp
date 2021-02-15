#pragma once
#include <cstdio>

template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
	return N;
}

template<typename T>
auto len(T const& t) -> decltype((void)(t.size()), T::size_type())
{
	return t.size();
}

std::size_t len(...)
{
	return 0;
}
