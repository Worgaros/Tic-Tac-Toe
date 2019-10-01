#pragma once

#include <iostream>
#include "show_map.h"
#include "set_new_position.h"
#include "check_win.h"

void PlayGame(std::vector<char>& board, char& turn, bool& isRunning, bool noError);