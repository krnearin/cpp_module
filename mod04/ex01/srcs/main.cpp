#include "Dog.h"
#include "Cat.h"

void	TestAllocAndDealloc()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In alloc/dealloc test!" << std::endl << std::endl;

	const int number = 5;
	Animal **animals = new Animal*[number];

	for (size_t i = 0; i < number; i++)
	{
		if (i <= number / 2)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	for (size_t i = 0; i < number; i++)
	{
		delete animals[i];
	}
	delete[] animals;

	std::cout << std::endl;
	std::cout << "End of alloc/dealloc test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

void	TestCopyAssignment()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In copy assignment test!" << std::endl << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	Dog *otherDog = new Dog();
	Cat *otherCat = new Cat();

	*dog = *otherDog;
	*cat = *otherCat;

	delete dog;
	delete cat;
	delete otherDog;
	delete otherCat;

	std::cout << std::endl;
	std::cout << "End of copy assignment test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

void	TestCopyConstructor()
{
	std::cout << "_______________________" << std::endl;
	std::cout << "In copy constructor test!" << std::endl << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();

	Dog *copiedDog = new Dog(*dog);
	Cat *copiedCat = new Cat(*cat);

	delete dog;
	delete cat;
	delete copiedDog;
	delete copiedCat;

	std::cout << std::endl;
	std::cout << "End of copy constructor test!" << std::endl;
	std::cout << "________________________" << std::endl << std::endl;
}

int	main(void)
{
	TestAllocAndDealloc();
	TestCopyAssignment();
	TestCopyConstructor();
}

//
//
//int main()
//{
//	{
//		Animal *j[10];
//
//		for (int i = 0; i < 10; i++) {
//			std::cout << "Animal nbr " << i + 1 << " allocated!\n";
//			std::cout << "-------------------------------------\n";
//			if (i % 2 == 0)
//				j[i] = new Dog;
//			else
//				j[i] = new Cat;
//			j[i]->makeSound();
//			std::cout << "-------------------------------------\n";
//		}
//
//
//		for (int i = 0; i < 10; i++) {
//			std::cout << "-------------------------------------\n";
//			delete j[i];
//			std::cout << "-------------------------------------\n";
//		}
//	}
//	std::cout << "-------------------------------------\n";
//	{
//		std::cout << "- Deep copy check for Dog class using assignation operator! -\n\n";
//		Dog *j = new Dog;
//		Dog *l = new Dog;
//
//		*l = *j;
//		delete l;
//		delete j;
//	}
//	std::cout << "-------------------------------------\n";
//	{
//		std::cout << "- Deep copy check for cat class using assignation operator! -\n\n";
//		Cat *j = new Cat;
//		Cat *l = new Cat;
//
//		*l = *j;
//		delete l;
//		delete j;
//	}
//	std::cout << "-------------------------------------\n";
//	std::cout << "-------------------------------------\n";
//	{
//		std::cout << "- Deep copy check for Dog class using copy constructor! -\n\n";
//		Dog *j = new Dog;
//		Dog *l = new Dog(*j);
//
//		delete l;
//		delete j;
//	}
//	std::cout << "-------------------------------------\n";
//	{
//		std::cout << "- Deep copy check for cat class using copy constructor! -\n\n";
//		Cat *j = new Cat;
//		Cat *l = new Cat(*j);
//
//		delete l;
//		delete j;
//	}
//	std::cout << "-------------------------------------\n";
//}