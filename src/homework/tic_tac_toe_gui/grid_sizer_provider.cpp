#include "grid_sizer_provider.h"

/*
Creates a box sizer with two radio buttons and one list box to display at the top of the panel.
@returns wxBoxSizer* a box sizer with wxWidgets in Horizontal layout
*/
wxBoxSizer * GridSizerProvider::get_top_box_sizer(wxRadioBox* game_type_radio,
	wxRadioBox* first_player_radio, wxListBox* history_list_box,
	wxTextCtrl* x_winner_label, wxTextCtrl* o_winner_label,
	wxTextCtrl* c_winner_label)
{
	wxString game_type_choices[]{ wxT("Tic Tac Toe 3"), wxT("Tic Tac Toe 4") };
	wxString first_player_choices[]{ wxT("X"), wxT("O") };

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	game_type_radio = new wxRadioBox(parent, -1, wxT("Game Type"), wxDefaultPosition, wxDefaultSize,
		WXSIZEOF(game_type_choices), game_type_choices, 1, wxRA_SPECIFY_COLS);

	first_player_radio = new wxRadioBox(parent, -1, wxT("First Player"), wxDefaultPosition,
		wxDefaultSize, WXSIZEOF(first_player_choices), first_player_choices, 1, wxRA_SPECIFY_COLS);
	//history_list_box = new wxListBox(parent, -1, wxPoint(-1, -1), wxSize(-1, -1));
	//history_list_box->Bind(wxEVT_LISTBOX, &Panel::on_list_box_click, parent);

	auto hbox1 = new wxBoxSizer(wxVERTICAL);

	auto label1 = new wxStaticText(parent, wxID_ANY, wxT("X: "),
		wxDefaultPosition, wxSize(70, -1));
	auto label2 = new wxStaticText(parent, wxID_ANY, wxT("O: "),
		wxDefaultPosition, wxSize(70, -1));
	auto label3 = new wxStaticText(parent, wxID_ANY, wxT("C: "),
		wxDefaultPosition, wxSize(70, -1));

	x_winner_label = new wxTextCtrl(parent, wxID_ANY);
	o_winner_label = new wxTextCtrl(parent, wxID_ANY);
	c_winner_label = new wxTextCtrl(parent, wxID_ANY);

	hbox0->Add(game_type_radio);
	hbox0->Add(first_player_radio);
	hbox1->Add(label1);
	hbox1->Add(x_winner_label);
	hbox1->Add(label2);
	hbox1->Add(o_winner_label);
	hbox1->Add(label3);
	hbox1->Add(c_winner_label);
	//hbox1->Add(history_list_box);

	hbox0->Add(hbox1);

	return hbox0;
}

/*
Creates a wxGridSizer with a label, textbox for winner text, and button to start the game.
Box sizer will display below the top box sizer.
@returns wxBoxSizer* a box sizer with wxWidgets in Horizontal layout
*/
wxBoxSizer * GridSizerProvider::get_mid_box_sizer(wxTextCtrl* winner_text, wxButton* start_button)
{
	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto winner_label = new wxStaticText(parent, wxID_ANY, wxT("Winner: "),
		wxDefaultPosition, wxSize(70, -1));
	hbox1->Add(winner_label, 0);

	winner_text = new wxTextCtrl(parent, wxID_ANY);
	winner_text->Disable();
	hbox1->Add(winner_text, 1);

	//start_button = new wxButton(parent, -1, wxT("Start"));
	//start_button->Bind(wxEVT_BUTTON, &Panel::on_start_button_click, parent);
	hbox1->Add(start_button);

	return hbox1;
}

/*
Displays the tic tac toe buttons for tic tac toe 3 or 4.
@param size determines if tic tac toe 3 or 4 will be placed
@returns wxGridSizer with the tic tac toe buttons to simulate the board.
*/
wxGridSizer * GridSizerProvider::get_grid_sizer(int size)
{
	auto gs = new wxGridSizer(size, size, size, size);

	if (size == 3)
	{
		for (std::size_t i = 0; i < peg_3_buttons.size(); ++i)
		{
			peg_3_buttons[i] = new wxButton(parent, -1, std::to_string(i + 1));
			gs->Add(peg_3_buttons[i], 0, wxEXPAND);
		}
	}
	else if (size == 4)
	{
		for (std::size_t i = 0; i < peg_4_buttons.size(); ++i)
		{
			peg_4_buttons[i] = new wxButton(parent, -1, std::to_string(i + 1));
			gs->Add(peg_4_buttons[i], 0, wxEXPAND);
		}
	}

	return gs;
}

std::vector<wxButton*>& GridSizerProvider::get_peg_3_buttons()
{
	return peg_3_buttons;
}

std::vector<wxButton*>& GridSizerProvider::get_peg_4_buttons()
{
	return peg_4_buttons;
}