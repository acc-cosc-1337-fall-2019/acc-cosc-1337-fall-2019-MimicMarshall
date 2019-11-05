//panel.cpp
#include"panel.h"
Panel::Panel(wxWindow * parent) : wxPanel(parent, -1)
{
	wxString choices[]{ wxT("one"), wxT("two") };

	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto m_usernameLabel = new wxStaticText(this, wxID_ANY, wxT("Enter goose:"),
		wxDefaultPosition, wxSize(70, -1));

	hbox1->Add(m_usernameLabel, 0);
	auto hbox2 = new wxBoxSizer(wxHORIZONTAL);
	
	//create a button
	auto m_buttonAction = new wxButton(this, -1, wxT("convert to duck or gooseeesss" ));
	m_buttonAction->Bind(wxEVT_BUTTON, &Panel::OnDisplay, this);
	hbox2->Add(m_buttonAction);
	m_nameEntry = new wxTextCtrl(this, wxID_ANY);
	hbox1->Add(m_nameEntry, 1);

	auto vbox = new wxBoxSizer(wxVERTICAL);
	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(hbox2, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);
	SetSizer(vbox);
}

void Panel::OnDisplay(wxCommandEvent & event)
{
	wxMessageBox("Duck " + m_nameEntry->GetValue() + " Duck", 
		"goose", wxYES | wxNO | wxICON_INFORMATION);
}