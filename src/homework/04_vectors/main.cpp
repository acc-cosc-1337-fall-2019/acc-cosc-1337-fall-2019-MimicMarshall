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
	int menu = 0;
	
	while (menu_choice == "y" || menu_choice == "Y")
	{
		cout << "Lets do some tests with some numbers.\n (1)Get Max Number (2)Is Prime (3)Vector of Primes: ";
		cin >> menu;
		if (menu == 1)
		{
			//get_max_from_vector function call
			cout << "Give me a list of numbers so that the largest number can be determined. \n" << "Type a number and then press enter to add another. (Type -1 to stop adding values): \n";
			int nums = 0;
			vector<int> vec = {};
			while (cin >> nums && nums != -1)
				vec.push_back(nums);
			int max = get_max_from_vector(vec);
			cout << "The greatest value in the vector is " << max << "\n\n";
		}
		else if (menu == 2)
		{
			//is_prime function call
			int prime = 0;
			cout << "Please put in a whole number to see if it is a prime number or not: ";
			cin >> prime;
			bool pr = is_prime(prime);
			if (pr == 1)
				cout << "The number " << prime << " is a prime number" << "\n\n";
			else
				cout << "The number " << prime << " is not a prime number" << "\n\n";
		}
		else if (menu == 3)
		{
			//vector_of_prime function call
			int number = 0;
			cout << "Please type in a value to show the prime numbers between 0 and that value: ";
			cin >> number;
			vector<int> prime_vector = vector_of_prime(number);
			cout << "The vector of prime numbers between 0 and " << number << " is { ";
			for (auto i : prime_vector)
				cout << i << ' ';
			cout << "}\n\n";
		}
		else
			cout << "Invalid Option\n";

		cout << "Do you you want to try again? Press 'Y' to repeat. ";
		cin >> menu_choice;
	}
	



	return 0;
}