#ifndef CLOCK_GRAPHIC_H
#define CLOCK_GRAPHIC_H
#include <memory.h>
#include <cmath>
#include <wx/wx.h>
#include "clock.h"
#include "../10_module/01_lib/ellipse.h"
#include "../10_module/01_lib/point.h"
#include "../10_module/01_lib/line.h"
#include "../10_module/01_lib/text.h"

using namespace mod10ex;

using std::unique_ptr; using std::make_unique;

class ClockGraphic
{
public:
	ClockGraphic(wxDC* dc, Point s, Point e);
	void draw();
private:
	void draw_hand(double degrees, int length);
	void draw_hours_hand();
	void draw_minutes_hand();
	void draw_seconds_hand();
	void draw_hours_text();
	void draw_seconds_markers();
	double get_degrees(double angle);

	wxDC* device_context;
	Clock clock;
	
	std::unique_ptr<mod10ex::Ellipse> clock_rim;
	Point start;
	Point end;
	int height;
	int width;
	const double pi{ 3.14159265358979323846 };
	const int rotate_circle_offset{ 90 };
};

#endif // !CLOCK_GRAPHIC_H
