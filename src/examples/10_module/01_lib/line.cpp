#include "../10_module/01_lib/line.h"

void mod10ex::Line::draw()
{
	device_context->DrawLine(start.x, start.y, end.x, end.y);
}


