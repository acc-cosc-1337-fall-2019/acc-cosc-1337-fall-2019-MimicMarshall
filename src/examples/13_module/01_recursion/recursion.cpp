#include "recursion.h"
#include<iostream>
//

void call_myself()
{
	call_myself();
}

void display(int n)
{
	if (n == 0) 
	{
		std::cout << "base case\n";
		return;
	}

	std::cout << "hello\n";
	display(n-1);
}

int factorial(int n) 
{
	int f = 1;

	if (n == 0) 
	{
		std::cout << "base case \n";
		return f;
	}

	std::cout << "load stack "<<n<<' \n';
	f = n * factorial(n - 1);
	std::cout << "unload stack \n";
	return f;
}