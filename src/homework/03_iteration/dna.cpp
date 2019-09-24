#include "dna.h"


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string DNA)
{
	int dna_size = DNA.size();
	string letter = "";
	int counter = 0;
	for (int i = 0; i < dna_size; i++)
	{
		letter = DNA.at(i);
		if (letter == "C" || letter == "G")
		{
			counter++;
		}
	}
	double percent = dna_size / counter;
	return percent;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string RVDNA) 
{
	return "";
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string DNACOMP)
{
	return "";
}