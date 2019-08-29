//write include statements
#include "expressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int result = multip_numbers(10, 10);

	cout << "Result: " << result;

	return 0;
}
