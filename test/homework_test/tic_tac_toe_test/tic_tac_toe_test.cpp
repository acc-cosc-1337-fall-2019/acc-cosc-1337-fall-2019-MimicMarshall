#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Game over test")
{
	TicTacToe3 board;
	REQUIRE(board.game_over() == false);
}
TEST_CASE("Game first player is set to X")
{
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}
TEST_CASE("Game first player is set to O")
{
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}
TEST_CASE("Test win first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win second column", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win third column", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win first diagonal", "[X wins first diagonal]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win second diagonal", "[X wins second diagonal]")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test no win")
{ /* Tic Tac Toe Board
		123
		456
		789
	   */
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//O   
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O  
	//no one wins
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win first column 4x4", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O   
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}




TEST_CASE("Test win second column 4x4", "[X wins second column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O   
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win third column 4x4 ", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win fourth column 4x4 ", "[X wins third column]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win first row 4x4 ", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win second row 4x4", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win third row 4x4", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win fouth row 4x4", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}
TEST_CASE("Test win first diagonal 4x4", "[X wins first diagonal]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   */
	TicTacToe4 board;
	board.start_game("O");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//o         
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//x          
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//o          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//x         
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//o 
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//x
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//o 
	//O wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "O");
}
TEST_CASE("Test win second diagonal 4x4", "[X wins second diagonal]")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//O  
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X 
	//X wins 
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "X");
}


TEST_CASE("Test No win 4x4")
{ /* Tic Tac Toe Board
		123
		456
		789


	   */
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(3);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//0         
	REQUIRE(board.game_over() == false);
	board.mark_board(6);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(8);//0          
	REQUIRE(board.game_over() == false);
	board.mark_board(10);//X 
	REQUIRE(board.game_over() == false);
	board.mark_board(9);//0 
	REQUIRE(board.game_over() == false);
	board.mark_board(12);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(11);//0 
	REQUIRE(board.game_over() == false);
	board.mark_board(13);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(15);//0
	REQUIRE(board.game_over() == false);
	board.mark_board(16);//X
	REQUIRE(board.game_over() == false);
	board.mark_board(14);//0
	// board full
	REQUIRE(board.game_over() == true);

	REQUIRE(board.get_winner() == "C");
}

