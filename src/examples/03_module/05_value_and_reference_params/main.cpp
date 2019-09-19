#include<iostream>

int main() 
{
	int num = 5;
	std::cout << "Address: " << &num <<"\n";
	std::cout << "Value: " << num <<"\n";

	int &num_ref = num;
	std::cout << num_ref << "\n";

	num_ref = 10;
	std::cout << num_ref << "\n";
	std::cout << num << "\n";

	return 0;
}