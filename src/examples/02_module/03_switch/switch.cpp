//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

string menu(int menu_option)
{
	switch (menu_option)
	{
	case 1: 
		return "Option 1";
	case 2:
		return "Option 2";
	case 3:
		return "Option 3";
	case 4:
		return "Option 4";
	default:
		return "Invalid Option";
	}
}
