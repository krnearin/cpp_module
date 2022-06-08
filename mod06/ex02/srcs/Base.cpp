#include "../includes/Base.h"
#include "../includes/A.h"
#include "../includes/B.h"
#include "../includes/C.h"

Base::~Base()
{

}

Base * generate(void)
{
	srand(time(NULL));
	int randD = rand() % 3;

	switch (randD)
	{
		case 0:
			std::cout << "Create class A" << std::endl;
			return new A();
		case 1:
			std::cout << "Create class B" << std::endl;
			return new B();
		case 2:
			std::cout << "Create class C" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "This is A class" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "This is B class" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "This is C class" << std::endl;
	else
		std::cout << "Error";
}

void identify(Base &base) {
	try {
		(void)dynamic_cast<A&>(base);
		std::cout << "This is A class" << std::endl;
	}
	catch (const std::exception &e) {}
	try {
		(void)dynamic_cast<B&>(base);
		std::cout << "This is B class" << std::endl;
	}
	catch (const std::exception &e) {}
	try {
		(void)dynamic_cast<C&>(base);
		std::cout << "This is C class" << std::endl;
	}
	catch (const std::exception &e) {}
}