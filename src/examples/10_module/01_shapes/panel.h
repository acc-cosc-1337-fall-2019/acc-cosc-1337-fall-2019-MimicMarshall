#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include "../10_module/01_lib/text.h"
#include "../10_module/01_lib/circle.h"
#include "../10_module/01_lib/rectangle.h"

using mod10ex::Point; using mod10ex::Shape; using mod10ex::Text; using mod10ex::Circle;

class Panel : public wxPanel 
{
public:
	Panel(wxWindow* parent);
private:
	void OnDraw(wxCommandEvent& event);
	void OnMouseDown(wxMouseEvent& event);
	void OnMouseUp(wxMouseEvent& event);
	void draw_shape(Point p, int width = 10, int height = 5, int radius = 25);
	wxTextCtrl* draw_text;
	wxRadioBox* radio_box;
	Point coord{0, 0};
};

#endif // !PANEL_H
