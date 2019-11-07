#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"
int main() 
{
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	string menu_choice = "y";
	int game_type;

	while (menu_choice == "y" || menu_choice == "Y")
	{
		cout << "Welcome to tic tac toe! \n";
		cout << "Play win by 3 or 4?: ";
		cin >> game_type;

		unique_ptr<TicTacToe> game;

		if (game_type == 3)
		{
			cout << "This is a game of Tic Tac Toe \n";
			cout << "1 | 2 | 3\n" << "4 | 5 | 6\n" << "7 | 8 | 9\n";
			cout << "Player 1 enter capital 'X' or 'O': ";
			game = std::make_unique<TicTacToe3>();
		}
		else
		{
			cout << "This is a game of Tic Tac Toe \n";
			cout << "1  | 2  | 3  | 4\n" << "5  | 6  | 7  | 8\n" << "9  | 10 | 11 | 12\n" << "13 | 14 | 15 | 16\n";
			cout << "Player 1 enter capital 'X' or 'O': ";
			game = std::make_unique<TicTacToe4>();
		}

		string player;
		cin >> player;

		game->start_game(player);
		while (game->game_over() == false)
		{
			cin >> *game;
			cout << *game;
		}

		cout << "Winner: ";
		cout << game->get_winner() << "\n";

		manager->save_game(game);

		cout << "Do you want to play again? press 'y' to repeat";
		cin >> menu_choice;
	}


	cout << "History: \n";
	cout << manager;


	return 0;
}