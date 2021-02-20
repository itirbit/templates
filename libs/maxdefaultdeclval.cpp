#include "maxdefaultdeclval.hpp"
#include <iostream>

int main()
{
	int i = 5;
	float f = 5.0f;
	double d = 11.0;
	std::cout << max(i,f) << '\n';
	std::cout << max(i,d) << '\n';
	std::cout << max(d,f) << '\n';
}
