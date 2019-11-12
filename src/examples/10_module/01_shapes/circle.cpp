#include "../src/examples/10_module/01_shapes/circle.h"

void Circle::draw() 
{
	device_context->DrawCircle(wxPoint(point.x, point.y), radius);
}

