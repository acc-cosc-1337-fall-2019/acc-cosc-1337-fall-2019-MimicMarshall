//checking_account.h
#include "bank_account.h"
class CheckingAccount : public BankAccount
{
public:
	
	CheckingAccount(int bal) : BankAccount(bal) {}
	int get_balance()const;
private:

};