#include "vec.h"
using std::vector;

int main() 
{
	loop_vector_w_index();
	vector<int> results = ret_vec_int();
	vector<int> nums = { 99, 55, 1, 3, 66 };
	vector<std::string> strs(9, " ");

	loop_vector_w_index(nums);

	loop_vector_w_index_ref(nums);

	loop_vector_w_index_const(nums);

	loop_vector_w_for_ranged(nums);


	return 0;
}