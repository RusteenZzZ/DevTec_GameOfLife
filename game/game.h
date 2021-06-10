#ifndef GAME
#define GAME

#include <stdlib.h>
#include "./../board_animation/clear_screen.h"
#include "./../board_animation/delay.h"
#include "./../board_animation/fill_board.h"
#include "./../board_animation/init_board.h"
#include "./../board_animation/next_generation_board_clipped.h"
#include "./../board_animation/num_of_neighbours_clipped.h"
#include "./../board_animation/print_board.h"
#include "./../board_animation/update_board.h"

void game_loop();

#endif