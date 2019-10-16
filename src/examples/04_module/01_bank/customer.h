//customer.h
#include "bank_account.h"
#include<iostream>
#include<vector>
using std::vector; using std::ostream;

class Customer
{
public:
	void add_account(BankAccount act);
	friend ostream& operator<<(ostream& out, const Customer& c);


private:
	vector<BankAccount> accounts;
	int total_balance{ 0 };
};