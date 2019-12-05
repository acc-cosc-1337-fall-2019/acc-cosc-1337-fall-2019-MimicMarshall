#include "report.h"
#include<iostream>
MyReport::MyReport() : accounts{new BankAccount*[SIZE]}//save 5 memory addresses for me
{
	//creates dynamic memory(heap) for each of the 5 addresses
	for (int = 0; i < SIZE; i++)
	{
		accounts[i] = new BankAccounts(i * 10);
	}
}
void MyReport::display()const
{
	for (int = 0; i < SIZE; i++)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}
MyReport::~MyReport()
{
	for (int = 0; i < SIZE; i++)
	{
		delete accounts[i];
	}
	delete[] accounts;
}