#include "../10_module/01_lib/rectangle.h"

void mod10ex::Rectangle::draw()
{
	device_context->DrawRectangle(point.x, point.y, width, height);
}
