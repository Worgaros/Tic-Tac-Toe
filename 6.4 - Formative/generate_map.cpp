#include "generate_map.h"

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