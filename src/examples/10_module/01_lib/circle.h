#ifndef CIRCLE_H_mod10
#define CIRCLE_H_mod10
#include"shape.h"
#include "point.h"

namespace mod10ex
{
	class Circle : public Shape
	{
	public:
		Circle(wxDC* dc, Point p, int r) : Shape(dc), point(p), radius(r) {}
		void draw() override;

	private:
		Point point;
		int radius;
	};
}
#endif // !CIRCLE_H
