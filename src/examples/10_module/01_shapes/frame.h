#ifndef FRAME_H
#define FRAME_H
#include<wx/wx.h>
#include "../src/examples/10_module/01_shapes/panel.h"

class Frame : public wxFrame 
{
public:
	Frame();
private:
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);

};

#endif // !FRAME_H
