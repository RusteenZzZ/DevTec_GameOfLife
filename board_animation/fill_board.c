#include "fill_board.h"

void fill_board(int board[SIZE][SIZE]){
	srand(time(NULL));
	int magic;
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			magic = rand()%100;
			if(magic <= FILLING_CHANCE){
				board[y][x] = ALIVE;
			}
		}
	}
	return;
}
