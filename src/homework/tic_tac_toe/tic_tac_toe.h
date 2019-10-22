//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cin; using std::cout; 
using std::string; using std::vector;
//One Game of TicTacToe
class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend std::istream& operator >> (std::istream& in, TicTacToe& position);
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& display);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner();
	vector<string> pegs{ 9, " " };
	string next_player;
	string winner;
};
#endif // !TICTACTOE