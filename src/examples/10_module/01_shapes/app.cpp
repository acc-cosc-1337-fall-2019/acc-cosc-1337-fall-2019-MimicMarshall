#include "../src/examples/10_module/01_shapes/app.h"
#include "../src/examples/10_module/01_shapes/frame.h"

bool App::OnInit() 
{
	auto frame = new Frame();
	frame->Show(true);

	return true;
}