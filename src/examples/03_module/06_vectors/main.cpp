#include "vec.h"

int main() 
{
	loop_vector_w_index();

	std::vector<int> nums = { 99, 55, 1, 3, 66 };
	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_range(nums);

	return 0;
}