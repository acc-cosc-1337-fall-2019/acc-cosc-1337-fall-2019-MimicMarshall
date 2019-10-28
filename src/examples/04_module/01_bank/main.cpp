#include<iostream>
#include"checking_account.h"
#include"savings_account.h"

using std::cout;


int main()
{
	int num = 5;
	int & num_ref = num; //get the address of num
	cout << "Address: " << &num_ref << std::endl; //output address
	cout << "Value at above address: " << num_ref << std::endl; //output value at address of num
	
	int *val_ = &num_ref; //update
	cout << "Value pointed to: " << val_ << std::endl;
	cout << "Num value: " << *val_ << std::endl;

	*val_ = 15;
	cout << "Value pointed to: " << val_ << std::endl;
	cout << "Num value: " << *val_ << std::endl;
	return 0;
}