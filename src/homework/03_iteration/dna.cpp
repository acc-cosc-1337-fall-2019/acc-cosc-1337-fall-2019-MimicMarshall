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
	double counter = 0;
	for (int i = 0; i < dna_size; i++)
	{
		letter = DNA.at(i);
		if (letter == "C" || letter == "G")
		{
			counter++;
		}
	}
	double percent = counter / dna_size;
	return percent;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string RVDNA) 
{
	int dna_size = RVDNA.size() - 1; //apply the -1 to end
	string reverse = "";
	for (int i = dna_size; i >= 0; i--) // make greater than and equal to
	{
		reverse = reverse + RVDNA.at(i);
	}
	return reverse;
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
	string reverse = DNACOMP; //get_reverse_string(DNACOMP);
	string complement = "";
	for (int i = 0; i < reverse.size(); i++)
	{
		if (reverse.at(i) == 'A')
		{
			complement = complement + 'T';
		}
		else if (reverse.at(i) == 'T')
		{
			complement = complement + 'A';
		}
		else if (reverse.at(i) == 'C')
		{
			complement = complement + 'G';
		}
		else if (reverse.at(i) == 'G')
		{
			complement = complement + 'C';
		}
	}
	return complement;
}