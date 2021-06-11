#ifndef GAME
#define GAME

#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "./../board_animation/delay.h"
#include "./../board_animation/fill_board.h"
#include "./../board_animation/init_board.h"
#include "./../board_animation/init_gospers_glider_gun.h"
#include "./../board_animation/next_generation_board_clipped.h"
#include "./../board_animation/num_of_neighbours_clipped.h"
#include "./../board_animation/next_generation_board_circular.h"
#include "./../board_animation/num_of_neighbours_circular.h"
#include "./../board_animation/print_board.h"
#include "./../board_animation/update_board.h"

/**
 * @param option 1 for clipped, 2 for circular (Clipped by default)
 */
void game_loop(int option);

#endif