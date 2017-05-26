#include <string>
#include <iostream>

class Test {
	public:
		Test();
		virtual Test(std::string n) = 0;
	private:
		std::string	name;
};

class Test1: public Test {
	public:
		Test();
		Test(std::string n);
	private:
		std::string name;
};
