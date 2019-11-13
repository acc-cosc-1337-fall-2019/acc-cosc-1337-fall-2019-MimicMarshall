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
	
}

/*
Draw a clock hand on this Clock at angle degrees length pixels long
*/
void ClockGraphic::draw_hand(double degrees, int length)
{
	
}

void ClockGraphic::draw_hours_hand()
{

}

void ClockGraphic::draw_minutes_hand()
{
	
}

void ClockGraphic::draw_seconds_hand()
{
	
}

void ClockGraphic::draw_hours_text()
{
	
}

void ClockGraphic::draw_seconds_markers()
{
	

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

