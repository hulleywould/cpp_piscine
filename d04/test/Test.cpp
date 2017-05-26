#include "Test.hpp"


Test::Test()
{
	std::cout << "constructor ran" << std::endl;
}

Test::Test(std::string n)
{
	name = n;
}

Test1::Test()
{
	std::cout << "Test1 constructor" << std::endl;	
}

Test1::Test(std::string n)
{
	name = n;
}
