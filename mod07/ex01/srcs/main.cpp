#include "../includes/iter.h"
#include <iostream>

template <typename T>
void printElement(T const &element)
{
	std::cout << element << " ";
	return ;
}

int main(void)
{
	int         numbers[] = {4, 8, 15, 15, 23, 42};
	std::string names[] = {"Locke", "Reyes", "Ford", "Jarrah", "Shephard", "Kwon"};

	std::cout << "Names   : ";
	::iter(names, 6, printElement);
	std::cout << std::endl;

	std::cout << "Numbers : ";
	::iter <int>(numbers, 6, printElement);
	std::cout << std::endl;

	return (0);
}

//class Awesome
//{
//public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
//private:
//	int _n;
//};
//
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//template< typename T >
//void print( T const & x ) { std::cout << x << std::endl; return; }
//
//int main() {
//	int tab[] = { 0, 1, 2, 3, 4 };
//	Awesome tab2[10];
//
//	iter( tab, 5, print );
//	iter( tab2, 10, print );
//
//	return 0;
//}