#include "report.h"
#include<iostream>
Report::Report()
{
	accounts = new BankAccounts[SIZE]; // calls default constructor

}
void Report::display()const
{
	for (int = 0; i < SIZE; i++)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
}
Report::~Report()
{
	delete[] accounts;
}
