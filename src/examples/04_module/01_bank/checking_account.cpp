#include "checking_account.h"

BankAccount::BankAccount()
{
	//code to read balance from database
	balance = 500;
}

//checking_account.cpp
void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

int BankAccount::get_balance()
{
	return balance;
}
