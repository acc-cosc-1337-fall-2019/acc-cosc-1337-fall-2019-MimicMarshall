#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "../src/examples/10_module/01_shapes/shape.h"
#include "../src/examples/10_module/01_shapes/point.h"

namespace acc
{
	class Rectangle : public Shape 
	{
	public:
		Rectangle(wxDC* dc, Point p, int w, int h) : Shape(dc), point(p),
			width(w), height(h) {}
		void draw() override;

	private:
		Point point;
		int width;
		int height;
	};

}

#endif // ! RECTANGLE_H