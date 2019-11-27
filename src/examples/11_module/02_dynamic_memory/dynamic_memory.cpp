#include "dynamic_memory.h"
#include<iostream>
using std::cout;

int* return_pointer(int number)
{
	return nullptr;


}

void allocate_use_release()
{
	int* intPtr; //declare

	intPtr = new int(10); //assign

	cout << *intPtr << "\n"; //use

	*intPtr = 100; //reassign

	cout << *intPtr; //use

	delete intPtr; //deallocate
}
