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

BankAccount BankAccount::operator+(const BankAccount & b)
{
	BankAccount account;
	account.balance = balance + b.balance;

	return account;
}

void display(const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator << (std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";
	return out;
}
std::istream & operator >> (std::istream & in, BankAccount & b)
{
	int amt;
	std::cout << "Enter amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
}
