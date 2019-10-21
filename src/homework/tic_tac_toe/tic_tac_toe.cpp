//cpp
#include "tic_tac_toe.h"


//public
bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true ||
		check_diagonal_win() == true || check_board_full() == true)
		return true;
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
	//123456789 // what player sees
	//012345678 //what programmer sees

	/*"0" | "1" | "2"
	  "3" | "4" | "5"
	  "6" | "7" | "8"*/
}

string TicTacToe::get_player() const
{
	return next_player;
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
	for (std::size_t i = 0; i < 9; i += 3)
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ")
			return true;
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if ((pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
		|| (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " "))
		return true;
	return false;
}

void TicTacToe::clear_board()
{
	for (std::size_t i = 0; i < 9; i++)
		pegs[i] = " ";
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < 9; i++)
	{
		if (pegs[i] == " ")
		{
			return false;
			break;
		}

	}
	return true;
}

std::istream& operator>>(std::istream& in, TicTacToe& position)
{
	int move;
	string player1 = " ";
	string player = position.get_player();
	if (player == "X" || player == "x")
		player1 = "O";
	else
		player1 = "X";
	cout << "Player " << player << " please choose a position between 1-9: ";
	in >> move;
	position.mark_board(move);
	return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& display)
{
	out << display.pegs[0] << " | " << display.pegs[1] << " | " << display.pegs[2] << "\n"
		 << display.pegs[3] << " | " << display.pegs[4] << " | " << display.pegs[5] << "\n"
		 << display.pegs[6] << " | " << display.pegs[7] << " | " << display.pegs[8] << "\n\n";
	return out;
}

