#include "../includes/Base.h"
#include "../includes/A.h"
#include "../includes/B.h"
#include "../includes/C.h"

int main()
{
	Base* obj = generate();
	std::cout << "PTR: " << std::endl;
	identify(obj);
	std::cout << "REF: " << std::endl;
	identify(*obj);
	delete obj;
}

