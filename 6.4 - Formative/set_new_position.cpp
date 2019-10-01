#include "set_new_position.h"

bool SetNewPosition(std::vector<char>& board, char& turn)
{
	int userInput = 0;
	bool emptyCase = true;

	if (turn == 'X') {
		std::cout << "\nPlayer - 1 [X] turn : ";
	}
	else if (turn == 'O') {
		std::cout << "\nPlayer - 2 [O] turn : ";
	}

	std::cin >> userInput;

	if (userInput < 0 || userInput > 8)
	{
		std::cout << "Invalid choice\n";
		return false;
	}

	if (turn == 'X' && board[userInput] != 'X' && board[userInput] != 'O')
	{
		board[userInput] = 'X';
		turn = 'O';
		emptyCase = true;
	}

	else if (turn == 'O' && board[userInput] != 'X' && board[userInput] != 'O')
	{
		board[userInput] = 'O';
		turn = 'X';
		emptyCase = true;
	}

	else
	{
		std::cout << "This case is already filled ! Select another !";
		return false;
	}
	return true;
}