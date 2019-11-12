#include "../src/examples/10_module/01_shapes/rectangle.h"

void acc::Rectangle::draw()
{
	device_context->DrawRectangle(point.x, point.y, width, height);
}
