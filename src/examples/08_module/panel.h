//panel.h
#ifndef PANEL_H
#define PANEL_H
#include <wx/wx.h>

class Panel : public wxPanel
{
public:
	Panel(wxWindow * parent);
private:
	void OnDisplay(wxCommandEvent & event);
	wxTextCtrl * m_nameEntry;
	wxRadioBox * radio_box;
};

#endif // !PANEL_H