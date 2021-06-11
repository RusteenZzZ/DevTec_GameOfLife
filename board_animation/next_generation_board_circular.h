#ifndef NEXT_GENERATION_BOARD_CIRCULAR
#define NEXT_GENERATION_BOARD_CIRCULAR

#include <stdlib.h>
#include "num_of_neighbours_circular.h"
#include "./../const.h"

/**
 * @param board_v1 The board of time t
 * @param board_v2 The board of time t+1
 */
void next_generation_board_circular(int board_v1[SIZE][SIZE], int board_v2[SIZE][SIZE]);

#endif