#ifndef PRINT_BOARD
#define PRINT_BOARD

#include <stdio.h>
#include <SDL2/SDL.h>
#include "./../const.h"

/**
 * @param board The board that will be printed
 */
void print_board(int board[SIZE][SIZE], SDL_Renderer *renderer);

#endif