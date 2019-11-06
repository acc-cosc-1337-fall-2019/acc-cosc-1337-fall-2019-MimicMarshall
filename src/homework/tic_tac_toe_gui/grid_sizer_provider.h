#ifndef GRID_SIZER_PROVIDER_H
#define GRID_SIZER_PROVIDER_H
#include<wx/wx.h>
#include<vector>

class GridSizerProvider
{
public:
	GridSizerProvider(wxWindow* p) : parent(p) {}
	wxBoxSizer * get_top_box_sizer(wxRadioBox* game_type_radio,
		wxRadioBox* first_player_radio, wxListBox* history_list_box,
		wxTextCtrl* x_winner_label, wxTextCtrl* o_winner_label,
		wxTextCtrl* c_winner_label);
	wxBoxSizer * get_mid_box_sizer(wxTextCtrl* winner_text, wxButton* start_button);

	wxGridSizer * get_grid_sizer(int size);
	std::vector<wxButton*>& get_peg_3_buttons();
	std::vector<wxButton*>& get_peg_4_buttons();
private:
	wxWindow* parent;
	wxRadioBox* game_type_radio;
	wxRadioBox* first_player_radio;
	wxButton* start_button;
	wxGridSizer* tic_tac_toe_grid_3;
	wxGridSizer* tic_tac_toe_grid_4;
	wxListBox* history_list_box;
	wxTextCtrl* winner_text;
	wxTextCtrl* x_winner_label;
	wxTextCtrl* o_winner_label;
	wxTextCtrl* c_winner_label;

	std::vector<wxButton*> peg_3_buttons;
	std::vector<wxButton*> peg_4_buttons;

};

#endif //GRID_SIZER_PROVIDER_H