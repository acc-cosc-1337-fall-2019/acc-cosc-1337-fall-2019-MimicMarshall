#include "ref_pointers.h"
#include<iostream>

using std::cout;


int main() 
{
	int num1 = 10;
	int num2 = 20;

	int& num_ref = num1;
	int* num_ptr = &num2;
	cout << "num1: " << num1 << " num2: " << num2 << "\n";

	ref(num_ref, num_ptr);

	cout << "num1: " << num1 << " num2: " << num2 << "\n";

	return 0;
}   