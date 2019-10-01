#include <iostream>

char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };;
int choice;
int row, column;
char turn = 'X';
bool draw = false;


void GenerateMap(char board[][3])
{ //Dessine la map
	std::cout << "PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
	std::cout << "\t\t     |     |     \n";
	std::cout << "\t\t  " << board[0][0] << "  | " << board[0][1] << "   |  " << board[0][2] << " \n";
	std::cout << "\t\t_____|_____|_____\n";
	std::cout << "\t\t     |     |     \n";
	std::cout << "\t\t  " << board[1][0] << "  | " << board[1][1] << "   |  " << board[1][2] << " \n";
	std::cout << "\t\t_____|_____|_____\n";
	std::cout << "\t\t     |     |     \n";
	std::cout << "\t\t  " << board[2][0] << "  | " << board[2][1] << "   |  " << board[2][2] << " \n";
	std::cout << "\t\t     |     |     \n";
}



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



bool gameover() {

	for (int i = 0; i < 3; i++)
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
			return false;

	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
		return false;


	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (board[i][j] != 'X' && board[i][j] != 'O')
				return true;

	draw = true;
	return false;
}

int main()
{
	while (gameover()) {
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
		std::cout << "\n\nGAME DRAW!!!\n\n";
}