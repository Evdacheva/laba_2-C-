#include "Vector.h"
#include<iostream>

Vector::Vector(int size)
{
	size_ = size;
	array_ = new double[size_];

	for (size_t i = 0; i < size_; i++)
	{
		array_[i] = 0;
	}

}

Vector::Vector()
{
	size_ = 0;
	array_ = new double[size_];

}

Vector::~Vector()
{
	delete[] array_;
}

void Vector::setElement(int index, int value)
{
	array_[index] = value;
}

int Vector::getElement(int index) const
{
	return array_[index];
}


void Vector::print() const
{
	for (int i = 0; i < size_; i++)
	{
		std::cout << array_[i] << " ";
	}
	std::cout << std::endl;
}

int Vector::getSize() const
{
	return size_;
}

double& Vector::operator[](const int index)
{
	return array_[index];
}


void Vector:: operator++()
{
	for (size_t i = 0; i < size_; i++)
	{
		++* (array_ + i);
	}
}
void Vector:: operator--()
{
	for (size_t i = 0; i < size_; i++)
	{
		--* (array_ + i);
	}
}
void Vector:: operator++(int)
{
	for (size_t i = 0; i < size_; i++)
	{
		(*(array_ + i))++;
	}
}

void Vector:: operator--(int)
{
	for (size_t i = 0; i < size_; i++)
	{
		(*(array_ + i))--;
	}
}
