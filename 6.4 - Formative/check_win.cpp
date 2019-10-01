#include "check_win.h"

void CheckWin(std::vector<char> board, bool& isRunning, char turn)
{
	const int maxCase = 8;

	if (board[0] == board[1] && board[0] == board[2] || 
		board[3] == board[4] && board[3] == board[5] || 
		board[6] == board[7] && board[6] == board[8] ||
		board[0] == board[3] && board[0] == board[6] || 
		board[1] == board[4] && board[1] == board[7] || 
		board[2] == board[5] && board[2] == board[8])
	{
		if (turn == 'O')
		{
			std::cout << "Player 1 win !\n";
		}

		else
		{
			std::cout << "Player 2 win !\n";
		}
		isRunning = false;
	}

	else if (board[0] == board[4] && board[0] == board[8] ||
		board[2] == board[4] && board[2] == board[6])
	{

		if (turn == 'O')
		{
			std::cout << "Player 1 win !\n";

		}

		else
		{
			std::cout << "Player 2 win !\n";
		}
		isRunning = false;
	}

	else if (board[0] != '0' && board[1] != '1' && board[2] != '2' && board[3] != '3' &&
			board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' &&
			board[7] != '7' && board[8] != '8')
	{
		isRunning = false;
		std::cout << "It's a draw !\n";
	}
}