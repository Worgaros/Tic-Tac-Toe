#include "main.h"

//char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
//int choice;
//int row, column;
//char turn = 'X';
//bool draw = false;

int main()
{
	std::vector<char> board;
	char turn = 'X';
	bool noError = false;

	GenerateMap(board);
	ShowMap(board);
	while (!noError)
	{
		noError = SetNewPosition(board, turn);
	}
	ShowMap(board);
	noError = false;
	while (!noError)
	{
		noError = SetNewPosition(board, turn);
	}
	ShowMap(board);

	/*while (gameover()) {
		GenerateMap(board);
		SetNewPosition(board, row, column);
		gameover();
	}
	if (turn == 'X' && draw == false) {
		std::cout << "\n\nCongratulations!Player with 'X' has won the game";
	}
	else if (turn == 'O' && draw == false) {
		std::cout << "\n\nCongratulations!Player with 'O' has won the game";
	}
	else
		std::cout << "\n\nGAME DRAW!!!\n\n";*/

	system("pause");
	return EXIT_SUCCESS;
}