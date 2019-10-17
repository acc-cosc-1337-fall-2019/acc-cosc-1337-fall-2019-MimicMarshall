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
		cout << "Do you want to play again? Press 'y' to repeat: ";
		cin >> menu_choice;
	}



	return 0;
}