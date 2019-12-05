//cpp
#include "arrays_dyn_ch.h"
#include <iostream>

void dynamic_char_array()
{
	const int SIZE = 10;
	char* name = new char[SIZE];
	std::cout << "Enter name: ";
	std:cin.getline(name, SIZE);

	std::cout << name << "\n";

	delete[] name;
	name = nullptr;
}