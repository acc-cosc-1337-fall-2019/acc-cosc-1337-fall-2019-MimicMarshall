//shape.h
#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using std::cout;

namespace mod7ex
{
	class Shape
	{
	public:
		virtual void draw() = 0;//pure virtual function, abstract class
	};
}

#endif