#include "memory_leak.h"

int main() 
{
	memory_leak();

	while (true)
	{
		memory_leak();
	}
	//more code

	//etc more code
	return 0;
}