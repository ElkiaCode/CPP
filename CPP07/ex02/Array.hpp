#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>
#include <cstdlib>


template <typename T>
class Array
{
	private:
		T *a;
		unsigned int num;

	public:
		Array() : a(NULL), num(0)
		{
		}

		Array(unsigned int n) : num(n)
		{
			if (n > 0)
				a = new T[n];
			else
				a = NULL;
			
		}

		Array(const Array &other) : num(other.num)
		{
			if (num > 0)
			{
				a = new T[num];
				for (unsigned int i = 0; i < num; i++)
					a[i] = other.a[i];
			}
			else
				a = NULL;
		}

		~Array()
		{
			delete[] a;
		}

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] a;
				T *temp = new T[other.num];
        		for (unsigned int i = 0; i < other.num; i++)
					temp[i] = other.a[i];
				a = temp;
				num = other.num;
			}
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= num)
				throw std::out_of_range("Index out of range");
			return a[i];
		}

		const T &operator[](unsigned int i) const
		{
			if (i >= num)
				throw std::out_of_range("Index out of range");
			return a[i];
		}

		unsigned int size() const
		{
			return num; 
		}
};

#endif