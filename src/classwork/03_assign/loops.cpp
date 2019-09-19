#include "loops.h"
#include<iostream>
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/
int factorial(int num)
{
	int sum = 1;
	while (1 <= num)
	{
		sum = sum * num;
		num--;
	}
	return sum;
}