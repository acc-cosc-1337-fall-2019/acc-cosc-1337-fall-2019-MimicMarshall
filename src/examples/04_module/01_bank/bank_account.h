//bank_account.h
class BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {};// inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const;//const makes class member read only

private:
	int balance;

};