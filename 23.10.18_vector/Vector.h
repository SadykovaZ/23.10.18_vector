#pragma once
#include<vector>
#include<iostream>
using namespace std;
class Vector
{
	int *arr;
	int size;
public:
	Vector();
	Vector(const Vector&array);	
	Vector(int size, int element=0);
	bool empty();
	int getSize() const;
	void clear();
	void push_back(int number);
	void pop_back();
	void erase(int index);
	void insert(int index, int number);
	int& operator[](int index) const;
	~Vector();
};

ostream& operator<<(ostream& os,const  Vector& v);