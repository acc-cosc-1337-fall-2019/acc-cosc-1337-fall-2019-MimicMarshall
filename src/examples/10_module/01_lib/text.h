#ifndef TEXT_H
#define TEXT_H
#include<wx/wx.h>
#include "shape.h"
#include "point.h"

using std::string;

namespace mod10ex
{
	class Text : public Shape
	{
	public:
		Text(wxDC* dc, string t, Point p) : Shape(dc), text(t), point(p) {}
		void draw() override;
	private:
		Point point;
		string text;
	};
}
#endif // TEXT_H