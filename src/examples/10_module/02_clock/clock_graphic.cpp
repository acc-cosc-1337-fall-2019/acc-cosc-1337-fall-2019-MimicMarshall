#include "clock_graphic.h"

ClockGraphic::ClockGraphic(wxDC* dc, Point s, Point e)
	: device_context(dc), start(s), end(e)
{
	clock_rim = std::make_unique<mod10ex::Ellipse>(dc, s, e);
	wxRect w(start.x, start.y, end.x, end.y);
	height = w.GetHeight();
	width = w.GetWidth();

}

void ClockGraphic::draw()
{
	device_context->SetPen(wxPen(wxColor(0, 0, 0), 1));
	clock_rim->draw();
	draw_seconds_markers();
	draw_hours_text();
	draw_seconds_hand();
	draw_minutes_hand();
	draw_hours_hand();
	clock.update_time();

}

/*
Draw a clock hand on this Clock at angle degrees length pixels long
*/
void ClockGraphic::draw_hand(double degrees, int length)
{
	double angle = get_degrees(degrees - rotate_circle_offset);
	int x1 = width / 2;
	int y1 = width / 2;
	int x2 = cos(angle) * length + width / 2;
	int y2 = sin(angle) * length + width / 2;

	std::unique_ptr<Shape> line = std::make_unique<Line>(device_context,
		Point(x1, y1), Point(x2, y2));
	line->draw();
}

void ClockGraphic::draw_hours_hand()
{
	double hours_angle = clock.get_hours() * 30;
	device_context->SetPen(wxPen(wxColor(255, 0, 0), 3));
	draw_hand(hours_angle, 45);
}

void ClockGraphic::draw_minutes_hand()
{
	double minutes_angle = clock.get_minutes() * 6;
	device_context->SetPen(wxPen(wxColor(0, 30, 255), 3));

	draw_hand(minutes_angle, 85);
}

void ClockGraphic::draw_seconds_hand()
{
	double seconds_angle = clock.get_seconds() * 6;
	device_context->SetPen(wxPen(wxColor(37, 120, 30), 3));
	draw_hand(seconds_angle, 105);
}

void ClockGraphic::draw_hours_text()
{
	for (int i = 0; i < 12; i++)
	{
		int hour = i;
		double hours_angle = i * 30 - rotate_circle_offset;
		double angle = get_degrees(hours_angle);
		double length = 90;
		if (i < 3 || i > 8)
		{
			length = 100;
		}

		int x = cos(angle) * length + width / 2;
		int y = sin(angle) * length + width / 2;

		if (i == 0)
		{
			hour = 12;
		}
		std::unique_ptr<Shape> text = std::make_unique<Text>(device_context,
			std::to_string(hour), Point(x, y));
		text->draw();
	}
}

void ClockGraphic::draw_seconds_markers()
{
	for (int i = 0; i < 60; i++)
	{
		double seconds_angle = i * 6 - rotate_circle_offset;
		double angle = get_degrees(seconds_angle);
		double inner_length = 105;
		double outer_length = 110;

		int x1 = cos(angle) * inner_length + width / 2;
		int y1 = sin(angle) * inner_length + width / 2;
		int x2 = cos(angle) * outer_length + width / 2;
		int y2 = sin(angle) * outer_length + width / 2;
		std::unique_ptr<Shape> line = std::make_unique<Line>(device_context,
			Point(x1, y1), Point(x2, y2));
		line->draw();
	}
}

/*
Given degrees return the radians

@param degrees from 0 to 360
@return radians
*/
double ClockGraphic::get_degrees(double angle)
{
	return angle * pi / 180;
}

