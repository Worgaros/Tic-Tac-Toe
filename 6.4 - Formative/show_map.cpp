#include "show_map.h"

void ShowMap(std::vector<char> board)
{
	std::cout << "PLAYER - 1 [X]\tPLAYER - 2 [O]\n\n";
	std::cout << "\t     |     |     \n";
	std::cout << "\t  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << " \n";
	std::cout << "\t_____|_____|_____\n";
	std::cout << "\t     |     |     \n";
	std::cout << "\t  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << " \n";
	std::cout << "\t_____|_____|_____\n";
	std::cout << "\t     |     |     \n";
	std::cout << "\t  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << " \n";
	std::cout << "\t     |     |     \n";
}