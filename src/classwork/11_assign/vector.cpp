#include "vector.h"

Vector::Vector()
	: size{ 0 }, nums{ nullptr }, space{ 0 }
{

}
//
Vector::Vector(size_t sz)
	: size{ sz }, nums{ new int[sz] }
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;
	}
}

Vector::Vector(const Vector& v)
	: size{ v.size }, nums{ new int[v.size] }
{
	for (size_t i = 0; i < size; ++i)
	{
		nums[i] = v[i];
	}
}

Vector& Vector::operator=(const Vector& v)
{
	if (this == &v) //avoid self copy
	{
		return *this;
	}
	/*
	if (v.space <= space)
	{
		for (size_t i = 0; i < v.size; ++i)
		{
			nums[i] = v.nums[i];
		}
		size = v.size;
		return *this;
	}*/

	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i)
	{
		temp[i] = v[i];
	}

	delete[] nums;
	nums = temp;
	size = v.size;
	space = v.size;

	return *this;
}

Vector::Vector(Vector&& v)//move constructor
	: size{ v.size }, nums{ v.nums }
{
	v.size = 0;
	v.nums = nullptr;
}

Vector& Vector::operator=(Vector&& v)//move assignment
{
	delete nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr;
	v.size = 0;

	return *this;
}

void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}

	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}

	delete[] nums;
	nums = temp;

	space = new_allocation;
}

void Vector::Resize(size_t new_size)
{
	Reserve(new_size);

	for (size_t i = 0; i < new_size; ++i)
	{
		nums[i] = 0;
	}
}

void Vector::Push_Back(int value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if (size == space)
	{
		Reserve(RESERVE_DEFAULT_SIZE * space);
	}

	nums[size] = value;
	++size;
}

Vector::~Vector()
{
	delete[] nums;
}
