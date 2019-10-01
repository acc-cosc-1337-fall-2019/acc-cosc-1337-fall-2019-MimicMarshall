//checking_account.h
class BankAccount
{
public:
	BankAccount();
	void deposit(int amount);
	//void withdraw(int ammount);
	int get_balance();

private: 
	int balance;

};