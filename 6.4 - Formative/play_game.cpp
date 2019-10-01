#include "play_game.h"

void PlayGame(std::vector<char>& board, char& turn, bool& isRunning , bool noError)
{
	ShowMap(board);
	while (!noError)
	{
		noError = SetNewPosition(board, turn);
	}
	CheckWin(board, isRunning, turn);
	if (isRunning == false)
	{
		ShowMap(board);
	}
	noError = false;
}