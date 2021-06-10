#ifndef NUM_OF_NEIGHBOURS
#define NUM_OF_NEIGHBOURS

#include <stdlib.h>
#include "./../const.h"

/**
 * @param board The board itself
 * @param x The x coordinate of the checked tyle
 * @param y The y coordinate of the checked tyle
 * @return The number of alive tyles in the vicinity of the sent tyle
 */
int num_of_neighbours(int board[SIZE][SIZE], int x, int y);

#endif