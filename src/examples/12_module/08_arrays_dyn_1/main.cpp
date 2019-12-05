#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>

int main()
{
	//stack/static array of objects
	BankAccount account[3];//executes the default constructor

	//read data file or database
	//initialize the balances

	//iterate array with auto and display balance
	for (int i = 0; i < 3; i++)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
	
	//stack/static array
	//read data file or database
	//initialize with an initializer list
	BankAccount accounts1[] = { BankAccount(5), BankAccount(10), BankAccount(50), BankAccount(100) };
	//create static array of accounts initalize accounts w 5, 10, 50, and 100 
	

	//write code to display balances
	for (int i = 0; i < 3; i++)
	{
		std::cout << accounts1[i].get_balance() << "\n";
	}

	   
	return 0;
}