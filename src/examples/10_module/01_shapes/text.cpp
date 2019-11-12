#include "../src/examples/10_module/01_shapes/text.h"

void Text::draw() 
{
	device_context->DrawText(text, point.x, point.y);
}


