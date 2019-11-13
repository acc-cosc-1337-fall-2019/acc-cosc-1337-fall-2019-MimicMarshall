//main
#include <iostream>
#include<memory>
#include<vector>
#include"../07_module/shape.h"
#include"../07_module/line.h"
#include"../07_module/circle.h"

using mod7ex::Shape; using mod7ex::Line; using mod7ex::Circle;

int main() 
{
	//Shape s_abtract; can't create instance; pure virtual
	//function makes it an abstract class

	Shape* line = new Line();//creates dynamic memory (heap)
	line->draw();
	delete line;

	std::vector < Shape *> shapes{ new Line(), new Circle() };
	//using a reference operator
	for (auto & shape : shapes)
	{
		shape->draw();
	}
	std::cout << std::endl;
	for (auto * shape : shapes)
	{
		shape->draw();
	}
	   	  	
	std::unique_ptr < Shape > line2 = std::make_unique< Line >();
	line2->draw();

	std::vector <std::unique_ptr < Shape >> shapes2;
	shapes2.push_back(std::make_unique< Line >());
	shapes2.push_back(std::make_unique< Circle >());
	
	for (auto & shape : shapes2)
	{
		shape->draw();
	}

	return 0;
}