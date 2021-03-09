#include <iostream>

template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

int main()
{
	std::cout << ::max<double>(1.0,-3.0) << " ";
	std::cout << ::max(1.0, -3.0) << " ";
	std::cout << ::max<int>(1.0,3.0) << " ";
}
