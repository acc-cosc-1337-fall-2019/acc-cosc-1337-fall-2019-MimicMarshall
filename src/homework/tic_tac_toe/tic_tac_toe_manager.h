//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<functional>
#include<vector>
#include "tic_tac_toe.h"
using std::vector; using std::ostream; using std::unique_ptr;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);
private:
	vector<unique_ptr<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);
};


#endif