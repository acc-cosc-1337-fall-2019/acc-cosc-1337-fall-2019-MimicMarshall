#include "ref_pointers.h"

//

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

