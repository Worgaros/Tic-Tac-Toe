#include "main.h"

int main()
{
	std::vector<char> board;
	char turn = 'X';
	bool noError = false;
	bool isRunning = true;

	GenerateMap(board);
	while (isRunning)
	{
		PlayGame(board, turn, isRunning, noError);
	}

	system("pause");
	return EXIT_SUCCESS;
}