#include "init_board.h"

void init_board(int board[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++)
		for(int x=0; x<SIZE; x++)	board[y][x] = DEAD;
	return;
}
