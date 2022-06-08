#include "../includes/Dog.h"
#include "../includes/Cat.h"
#include "../includes/WrongCat.h"

//void	SomePolymorphicFunction(const Animal *animal)
//{
//	std::cout << "this is "
//			  << animal->getType() << " in SomePolymorphicFunction!"
//			  << std::endl;
//}
//
//void	WrongPolymorphismTest()
//{
//	WrongAnimal *wrong = new WrongCat();
//	WrongCat	*wrongCat = new WrongCat();
//
//	wrongCat->MakeSound();
//	wrong->MakeSound();
//	delete wrong;
//	delete wrongCat;
//}
//
//int		main(void)
//{
//	const Animal* meta = new Animal();
//	const Animal* dog = new Dog();
//	const Animal* cat = new Cat();
//	std::cout << dog->getType() << " " << std::endl;
//	std::cout << cat->getType() << " " << std::endl;
//	cat->MakeSound();
//	dog->MakeSound();
//	meta->MakeSound();
//
//	delete meta;
//	meta = dog;
//	std::cout << meta->getType() << " " << std::endl;
//	meta->MakeSound();
//
//	SomePolymorphicFunction(cat);
//	SomePolymorphicFunction(dog);
//	SomePolymorphicFunction(meta);
//
//	WrongPolymorphismTest();
//
//	delete dog;
//	delete cat;
//}

int main()
{
	{
		std::cout << "-------------------------------------\n";
		const Animal *meta = new Animal();
		std::cout << "-------------------------------------\n";
		const Animal *j = new Dog();
		std::cout << "-------------------------------------\n";
		const Animal *i = new Cat();
		std::cout << "-------------------------------------\n";
		std::cout << "j type: " << j->getType() << std::endl;
		std::cout << "meta type: " << meta->getType() << std::endl;
		std::cout << "i type: " << i->getType() << std::endl;
		std::cout << "-------------------------------------\n";
		i->MakeSound(); //will output the cat sound!
		j->MakeSound();
		meta->MakeSound();
		std::cout << "-------------------------------------\n";
		// delete meta;
		delete j;
		// delete i;
		std::cout << "-------------------------------------\n";
	}
	std::cout << "\n\n\n";
	{
		std::cout << "-------------------------------------\n";
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *j = new WrongCat();
		std::cout << "-------------------------------------\n";
		j->MakeSound();
		meta->MakeSound();
		std::cout << "-------------------------------------\n";
		delete meta;
		delete j;
		std::cout << "-------------------------------------\n";
	}
}
