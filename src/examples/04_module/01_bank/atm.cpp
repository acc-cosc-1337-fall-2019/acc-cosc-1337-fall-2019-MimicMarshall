#include<iostream>
#include "atm.h"

using std::cout;

//atm.cpp

ATM::ATM(BankAccount a) : account(a)
{
	//have a class that gets balance from database

}

void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance() << "\n";
}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}
