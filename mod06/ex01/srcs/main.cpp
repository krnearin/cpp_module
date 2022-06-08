#include "../includes/Data.h"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data;
	data.nbr = 42;
	data.str = "Per Aspera Ad Astra";

	std::cout << "data.nbr: " << data.nbr << std::endl;
	std::cout << "data.str: " << data.str << std::endl;

	uintptr_t ptr = serialize(&data);
	Data *deserialized = deserialize(ptr);

	std::cout << "--------------------------" << std::endl;
	std::cout << "data.nbr: " << deserialized->nbr << std::endl;
	std::cout << "data.str: " << deserialized->str << std::endl;
}