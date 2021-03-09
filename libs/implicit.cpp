#include <iostream>
template<typename Dst, typename Src>
Dst implicit_cast(Src const& x)
{
	return x;
}

int main()
{
	int ivalue = -1;
	double value = implicit_cast<double>(ivalue);
	auto val2 = implicit_cast<int>(23.89f);
	int val3 = implicit_cast<int>(1.0/8);
	std::cout << value << '\n';
	std::cout << val2 << '\n';
	std::cout << val3 << '\n';
}
