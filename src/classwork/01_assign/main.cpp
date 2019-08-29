//Write the include statement for types.h here
#include "types.h"
#include <iostream>

//Write include for capturing input from keyboard and displaying output to screen
using std::cout;


int main() 
{
	int result = sum_numbers(5, 5);

	cout << "Result: " << result;

	return 0;
}

