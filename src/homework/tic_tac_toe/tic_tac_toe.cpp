//cpp
#include "tic_tac_toe.h"


//public
bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true||
		check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = "C";
		return true;
	}
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

string TicTacToe::get_winner() const
{
	return winner;
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
	return false;
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
	for (std::size_t i = 0; i < pegs.size() - 1; i++)
		pegs[i] = " ";
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size() - 1; i++)
	{
		if (pegs[i] == " ")
		{
			return false;
			break;
		}

	}
	return true;
}

void TicTacToe::set_winner()
{
	if (next_player == "X")
		winner = "O";
	else
		winner = "X";
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
	if (position.pegs.size() == 9)
	{
		cout << "Player " << player << " please choose a position between 1-9: ";
	}
	else if (position.pegs.size() == 16)
	{
		cout << "Player " << player << " please choose a position between 1-16: ";
	}
	in >> move;
	position.mark_board(move);

	return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& display)
{
	if (display.pegs.size() == 9)
	{
		out << display.pegs[0] << " | " << display.pegs[1] << " | " << display.pegs[2] << "\n"
			<< display.pegs[3] << " | " << display.pegs[4] << " | " << display.pegs[5] << "\n"
			<< display.pegs[6] << " | " << display.pegs[7] << " | " << display.pegs[8] << "\n\n";
	}
	else if (display.pegs.size() == 16)
	{
		out << display.pegs[0] << " | " << display.pegs[1] << " | " << display.pegs[2] << " | " << display.pegs[3] << " \n"
			<< display.pegs[4] << " | " << display.pegs[5] << " | " << display.pegs[6] << " | " << display.pegs[7] << " \n"
			<< display.pegs[8] << " | " << display.pegs[9] << " | " << display.pegs[10] << " | " << display.pegs[11] << "\n"
			<< display.pegs[12] << " | " << display.pegs[13] << " | " << display.pegs[14] << " | " << display.pegs[15] << "\n";
	}
	return out;
}

