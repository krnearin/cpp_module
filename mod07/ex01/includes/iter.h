#ifndef ITER_H
#define ITER_H

#include <iostream>

template <class adrArray, class lenArray>
void iter(adrArray array[], lenArray len, void(*funcArr)(adrArray const &))
{
	for ( lenArray i = 0; i < len; i++)
		funcArr(array[i]);
}


#endif
