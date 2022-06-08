#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _len;
public:
	Array() {
		_array = new T[0];
		_len = 0;
	};
	~Array() {
		delete[]_array;
	};
	Array(unsigned int n){
		_len = n;
		_array = new T[n]();
	};
	Array(Array<T> const &other){
		_array = new T[other._len];
		*this = other;
	};
	Array& operator=(Array const &other){
		if (this == &other)
		{
			return *this;
		}
		_len = other._len;
		delete[] _array;
		_array = new T[other._len];
		std::memcpy(_array, other._array, sizeof(T) * other._len);
		return *this;
	};
	T& operator[](unsigned int index){
		if (index < 0 || index >= _len)
			throw ArrayException();
		return _array[index];
	};
	class ArrayException : public std::exception{
	public :
		virtual const char* what() const throw()
		{
			return ("ArrayException: index out of range");
		}
	};
	unsigned int size() {
		return (_len);
	};
};

#endif


