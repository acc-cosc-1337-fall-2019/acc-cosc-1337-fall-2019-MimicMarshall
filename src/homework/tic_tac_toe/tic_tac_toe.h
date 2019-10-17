//h
#include<iostream>
#include<string>
#include<vector>
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
	friend std::istream& operator >> (std::istream& in, TicTacToe& position);
	friend std::ostream& operator << (std::ostream& out, TicTacToe& display);

private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{ 9, " " };
	string next_player;
};
