//cpp
#include "tic_tac_toe.h"


//public
bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win ||
		check_diagonal_win || check_board_full)
		return true;
	else
		return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

/* Position is based on player. Programmer should do number - 1*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::display_board() const
{
}


//private
void TicTacToe::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
		if (pegs[i] == pegs [i + 3] && pegs[i + 3] == pegs[i + 6] 
			&& pegs[i + 6] != " ")
			return true;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::clear_board()
{
}

bool TicTacToe::check_board_full()
{
	return false;
}
