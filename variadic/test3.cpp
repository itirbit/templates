#include <iostream>

template <typename... Types>
void print(Types const& ... args)
{
	(std::cout << ... << args) << '\n';
}

int main()
{
	std::string s("word");
	print(3.5, "hello", s, 435);
}
