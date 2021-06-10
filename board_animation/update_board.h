#ifndef UPDATE_BOARD
#define UPDATE_BOARD

#include "./../const.h"

/**
 * @param board_v1 The board of time t
 * @param board_v2 The board of time t+1
 * @return board_v1 is a pointer, no need to return it
 */
void update_board(int board_v1[SIZE][SIZE], int board_v2[SIZE][SIZE]);

#endif