#include "vectors.h"
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	string menu_choice = "y";
	while (menu_choice == "y" || menu_choice == "Y")
	{
		vector<int> vec = { 8,4,20,88,66,99 };
		int number = get_max_from_vector(vec);
		cout << "The greatest value in the vector is " << number << "\n";






		cout << "Do you you want to try again? Press 'Y' to repeat. ";
		cin >> menu_choice;
	}
	



	return 0;
}