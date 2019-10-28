#include<iostream>
#include"checking_account.h"
#include"savings_account.h"

using std::cout;


int main()
{
	int * ptr_num = new int(5); //acquire dynamic memory
	std::cout << "Address of: " << ptr_num << std::endl;
	std::cout << "Value pointed to: " << *ptr_num << std::endl;

	delete ptr_num; //YOU MUST REMEMBER TO DELETE ALLOCATED MEMORY
	std::cout << "Address of: " << ptr_num << std::endl;
	std::cout << "Value pointed to: " << *ptr_num;
	return 0;
}