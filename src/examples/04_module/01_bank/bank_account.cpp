//bank_account.cpp
#include "bank_account.h"

BankAccount::BankAccount() // constructor
{
	//code to read balance from database
	balance = 500;
}

//checking_account.cpp
void BankAccount::deposit(int amount)
{
	if (amount > 0)
		balance += amount;
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
		balance -= amount;
}

int BankAccount::get_balance() const
{
	return balance;
}