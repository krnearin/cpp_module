#include "../includes/Span.h"

void test1()
{
	std::cout << "----------TEST_1-----------" << std::endl;
	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
}

void test2()
{
	std::cout
			<< "________ADD_NUMBERS_TEST________" << std::endl
			<< std::endl;

	int size = 10;
	std::list<int> list = std::list<int>();
	Span span = Span(10);

	std::cout << "adding numbers to source list: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << i << " ";
		list.push_front(i);
	}
	std::cout << std::endl;
	try
	{
		std::cout << "passing iterators of the source list into the addNumber method of the span..." << std::endl;
		span.addNumber(list.begin(), list.end());
		std::cout << std::endl;

		std::cout << "resulting spans: " << std::endl;
		std::cout << "longest span: " << span.longestSpan() << std::endl;
		std::cout << "shortest span: " << span.shortestSpan() << std::endl;
	}
	catch (const std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}

	std::cout
			<< "________________________________" << std::endl
			<< std::endl;
}
int main()
{
	test1();
	test2();
}

