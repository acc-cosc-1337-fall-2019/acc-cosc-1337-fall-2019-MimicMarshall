//circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include"shape.h"
#include<iostream>

class Circle : public Shape
{
public:
	void draw() override;
};

#endif