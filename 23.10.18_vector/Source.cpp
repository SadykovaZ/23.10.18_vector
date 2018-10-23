#include"Vector.h"
#include<iostream>
using namespace std;
void main()
{
	Vector v(10,-7);
	//cout << v.getElement(5);
	cout << v[5];
	cout << v.operator[](5);
	v[0] = 17;
	system("pause");
}