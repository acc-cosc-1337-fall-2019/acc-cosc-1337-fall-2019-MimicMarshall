//line.h
#ifndef LINE_H
#define LINE_H

#include"shape.h"
#include<iostream>
class Line : public Shape
{
public:
	void draw() override;
};

#endif