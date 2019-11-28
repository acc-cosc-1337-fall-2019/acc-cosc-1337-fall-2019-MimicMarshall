#include "vector.h"
#include<iostream>

//Vector get_vector();

int main()
{
	//Vector v(1);
	//v = get_vector();
	Vector<double> v(1);
	v[0] = 2.5;
	std::cout << v[0];
	return 0;
}
/*
Vector get_vector()
{
	Vector v(3);

	return v;
}*/

