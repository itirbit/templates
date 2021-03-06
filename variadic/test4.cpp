template <typename... Types>
class Tuple
{

};
int main()
{
	Tuple<int> t1;
	Tuple<int,char> t2;
	Tuple<int,int,int> t3;
	Tuple<> t4;
}
