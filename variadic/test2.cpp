#include <iostream>

template <typename T>
void print(T arg)
{
	std::cout << arg << '\n';
}

template <typename T, typename... Types>
void print(T firstArg, Types... args)
{
	print(firstArg);
	print(args...);
}

int main()
{
	std::string s("word");
	print(4.2, "hello", s, 34);
}
