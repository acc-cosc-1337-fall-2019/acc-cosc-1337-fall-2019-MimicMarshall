#include "../10_module/01_lib/circle.h"

void mod10ex::Circle::draw() 
{
	device_context->DrawCircle(wxPoint(point.x, point.y), radius);
}

