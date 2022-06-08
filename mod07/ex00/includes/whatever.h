#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template <class arg>
void swap(arg &a, arg &b)
{
	arg tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class arg>
arg min(arg a, arg b)
{
	if (a == b)
		return b;
	return a > b ? b : a;
}

template <class arg>
arg max(arg a, arg b)
{
	if (a == b)
		return b;
	return a > b ? a : b;
}


#endif
