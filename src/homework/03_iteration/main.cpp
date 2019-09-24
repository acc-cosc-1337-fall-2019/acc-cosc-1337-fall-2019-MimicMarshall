//write include statements
#include "dna.h"
#include<string>
#include<iostream>
//write using statements
using std::string;
using std::cout;
using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string menu_choice = "y";
	while (menu_choice == "y" || menu_choice == "Y")
	{
		string dna = "";
		cout << "Tell me the DNA sequence that you want to analyze: ";
		cin >> dna;
		int menu = 0;
		cout << "Tell me if you want the (1)GC Content or (2)DNA Complement: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << get_gc_content(dna);
		case 2:
			cout << get_dna_complement(dna);
		default:
			cout << "Invalid Option\n";
		}
		cout << "Do you you want to try again? Press 'Y' to repeat. ";
		cin >> menu_choice;
	}
	
}