//bank_account.h
#include<iostream>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {};// inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	virtual int get_balance() const;//const makes class member read only
	friend void display(const BankAccount& account);
	friend std::ostream & operator << (std::ostream& out, const BankAccount& b);
	friend std::istream & operator >> (std::istream& in, BankAccount& b);
	BankAccount operator+(const BankAccount& b);


protected:
	int balance;
	
};

#endif