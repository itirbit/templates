#include "len.hpp"
#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	int a[10];
	std::cout << len(a) << '\n';
	std::cout << len("Hi") << '\n';

	std::vector<int> v;
	std::cout << len(v) << '\n';

	int* p;
	std::cout << len(p) << '\n';
	return 0;
}
