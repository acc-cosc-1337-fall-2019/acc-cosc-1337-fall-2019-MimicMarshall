//h
#include<iostream>
#include<string>
#include<vector>
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::cin; using std::cout; 
using std::string; using std::vector;
using std::ostream;
//One Game of TicTacToe
class TicTacToe
{
public:
	TicTacToe() {};
	TicTacToe(int size) : pegs(size*size, " ") {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;
	friend std::istream& operator >> (std::istream& in, TicTacToe& position);
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& display);
	
protected:
	vector<string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	string next_player;
	string winner;
};
#endif // !TICTACTOE