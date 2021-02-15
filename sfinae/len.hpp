#pragma once
#include <cstdio>

template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
	return N;
}

template<typename T>
typename T::size_type len(T const& t)
{
	return t.size();
}

std::size_t len(...)
{
	return 0;
}
