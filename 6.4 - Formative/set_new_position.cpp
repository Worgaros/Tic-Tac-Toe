#include "set_new_position.h"

bool SetNewPosition(char board[][3], int row, int colum)
{
	if (turn == 'X') {
		std::cout << "\n\tPlayer - 1 [X] turn : ";
	}
	else if (turn == 'O') {
		std::cout << "\n\tPlayer - 2 [O] turn : ";
	}

	std::cin >> choice;

	if (row <= 3 && row >= 1 && colum <= 3 && colum >= 1) {
		if (board[row - 1][1 - colum] != '_')
			std::cout << "Case deja pleine !  \n\n";
		else
			return true;
	}
	else
		std::cout << "Wrong  ! \n\n";

	return false;
}