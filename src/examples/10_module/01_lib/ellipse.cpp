#include "../10_module/01_lib/ellipse.h"

void mod10ex::Ellipse::draw()
{
	device_context->DrawEllipse(start.x, start.y, end.x, end.y);
}