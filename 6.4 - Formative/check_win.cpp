#include "check_win.h"

//bool gameover() {
//
//	for (int i = 0; i < 3; i++)
//		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
//			return false;
//
//	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
//		return false;
//
//
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 3; j++)
//			if (board[i][j] != 'X' && board[i][j] != 'O')
//				return true;
//
//	draw = true;
//	return false;
//}