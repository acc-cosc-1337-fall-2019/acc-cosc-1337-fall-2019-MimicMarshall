#include "dangling_pointer.h"

//

void dangling_pointer()
{
	int* ptr_num = new int(5);
	int* ptr = ptr_num;
	delete ptr_num;
	//std::cout << *ptr;
	ptr_num = nullptr;

	//ptr points to invalid
	//address
}
