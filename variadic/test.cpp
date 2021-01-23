#include <iostream>
#include <string>

void print()
{

}

template <typename T, typename... Types>
void print(T firstArg, Types... args)
{
	std::cout << firstArg << "\n";
	print(args...);
}

int main()
{
	std::string s("word");
	print(7.5, "hello", 1, s);
}
