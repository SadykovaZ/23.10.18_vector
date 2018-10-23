#include "Vector.h"



Vector::Vector()
{
	this->arr = nullptr;
	this->size = 0;
}

Vector::Vector(const Vector & v)
{
	this->size = v.size;
	if (this->size == 0)
	{
		this->arr = nullptr;
		this->size = 0;
		return;
	}
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = v.arr[i];
	}
}

Vector::Vector(int size, int element)
{
	if (size <= 0) return;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{

	}
}

bool Vector::empty()
{
	return false;
}

int Vector::getSize() const
{
	return this->size;
}

void Vector::clear()
{
}

void Vector::push_back(int number)
{
}

void Vector::pop_back()
{
	if (this->size <= 0) return;
	if (this->size == 1)
	{
		this->~Vector();
		return;
	}
	int *tmp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		tmp[i] = this->arr[i];
	}
	delete[] this->arr;
	this->arr = tmp;
	this->size--;
}

void Vector::erase(int index)
{
	if (size <= 0 || index >= this->size || index < 0) return;
	int *tmp = new int[size - 1];
	for (int i = 0, j=0; i < size-1; i++)
	{
		if (i == index) j++;
		else tmp[i] = this->arr[j];
	}
	delete[] this->arr;
	this->arr = tmp;
	this->size--;
}

void Vector::insert(int index, int number)
{

}

int& Vector::operator[](int index) const
{
	return this->arr[index];
}


Vector::~Vector()
{
	if (arr != nullptr)
		delete[] arr;
	this->arr = nullptr;
	this->size = 0;
}

ostream & operator<<(ostream & os, const Vector & v)
{
	for (size_t i = 0; i < v.getSize(); i++)
	{
		os << v[i] << " ";
	}
	return os;
}
