#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "point.h"

namespace mod10ex
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