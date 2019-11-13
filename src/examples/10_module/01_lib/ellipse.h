#ifndef ELLIPSE_H
#define ELLIPSE_H
#include"shape.h"
#include "point.h"

namespace mod10ex
{
	class Ellipse : public Shape
	{
	public:
		Ellipse(wxDC* dc, Point s, Point e) : Shape(dc), start(s.x, s.y), end(e.x, e.y) {}
		void draw() override;
	private:
		Point start;
		Point end;
		int radius;
	};
}
#endif // !ELLIPSE_H