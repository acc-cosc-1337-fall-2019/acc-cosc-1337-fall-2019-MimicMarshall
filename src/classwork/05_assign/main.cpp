//write include statemetns
#include "rectangle.h"
#include<iostream>
#include<vector>
#include<string>

using std::vector;
using std::cout;
using std::cin;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<Rectanglee> rectangles;
	rectangles.push_back(Rectanglee(4, 5));
	rectangles.push_back(Rectanglee(10, 10));
	rectangles.push_back(Rectanglee(100, 10));

	for (auto rec : rectangles)
	{
		cout << "Area: " << rec.get_area() << "\n";
	}
	return 0;
}