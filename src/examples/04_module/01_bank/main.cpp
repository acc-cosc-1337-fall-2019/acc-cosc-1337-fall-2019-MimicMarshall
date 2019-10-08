#include<iostream>
#include<vector>
#include "atm.h"

using std::cout; using std::vector;


int main()
{
	//scan card and enter pin
	//get customer record from db into a vector
	vector<BankAccount> accounts{ BankAccount(500), 
		BankAccount(600), BankAccount(1000) };


	ATM atm(accounts[0]);
	atm.display_balance();
	atm.deposit(100);
	atm.withdraw(50);
	cout << "\n";
	atm.display_balance();

	return 0;
}