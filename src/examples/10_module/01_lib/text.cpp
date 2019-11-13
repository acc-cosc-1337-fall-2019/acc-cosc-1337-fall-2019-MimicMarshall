#include "../10_module/01_lib/text.h"

void mod10ex::Text::draw() 
{
	device_context->DrawText(text, point.x, point.y);
}


