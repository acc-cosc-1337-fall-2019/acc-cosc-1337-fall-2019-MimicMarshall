#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
int main() 
{
	TicTacToe a;
	TicTacToeManager manager;
	string menu_choice = "y";
	int game_type;


	while (menu_choice == "y" || menu_choice == "Y")
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		TicTacToe* game;
		if (game_type == 3) 
		{
			game = new TicTacToe3();
		}
		else
		{
			game = new TicTacToe4();
		}
		string player = " ";
		cout << "This is a game of Tic Tac Toe \n";
		cout << "1 | 2 | 3\n" << "4 | 5 | 6\n" << "7 | 8 | 9\n";
		cout << "Player 1 enter capital 'X' or 'O': ";
		cin >> player;
		game->start_game(player);
		bool gaming = false;
		while (gaming == false)
		{
			cin >> a;
			cout << a;
			int winner = 0;
			bool done = a.game_over();
			if (done == true)
			{
				if (winner != 1)
				{
					cout << "Winner!\n";
					winner = 1;
				}
				gaming = true;
			}
			else if (done == false)
			{
				cin >> a;
				cout << a;
			}
			bool over = a.game_over();
			if (over == true) 
			{
				if (winner != 1)
				{
					cout << "Winner!\n";
					winner = 1;
				}
				gaming = true;
			}
		}

		manager.save_game(*game);
		cout << "Do you want to play again? Press 'y' to repeat: ";
		cin >> menu_choice;
	}


	cout << "History: \n";
	cout << manager;


	return 0;
}