#include "tic_tac_toe.h"
int main() 
{
	TicTacToe a;
	string menu_choice = "y";

	while (menu_choice == "y" || menu_choice == "Y")
	{
		string player = " ";
		cout << "This is a game of Tic Tac Toe \n";
		cout << "1 | 2 | 3\n" << "4 | 5 | 6\n" << "7 | 8 | 9\n";
		cout << "Player 1 enter capital 'X' or 'O': ";
		cin >> player;
		a.start_game(player);
		bool gaming = false;
		while (gaming == false)
		{
			int move;
			string player1 = " ";
			if (player == "X" || player == "x")
				player1 = "O";
			else
				player1 = "X";
			cout << "Player " << player << " please choose a position between 1-9: ";
			cin >> move;
			a.mark_board(move);
			a.display_board();
			cout << "\n";
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
				cout << "Player " << player1 << " please choose a position between 1-9: ";
				cin >> move;
				a.mark_board(move);
				a.display_board();
				cout << "\n";
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


		cout << "Do you want to play again? Press 'y' to repeat: ";
		cin >> menu_choice;

	}



	return 0;
}