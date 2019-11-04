//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<functional>
#include<vector>
#include "tic_tac_toe.h"
using std::vector; using std::ostream; using std::reference_wrapper;

class TicTacToeManager
{
public:
	void save_game(TicTacToe& game);
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);
private:
	vector<reference_wrapper<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);
};


#endif