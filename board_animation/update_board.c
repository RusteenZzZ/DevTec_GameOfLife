#include "update_board.h"

void update_board(int board_v1[SIZE][SIZE], int board_v2[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			board_v1[y][x] = board_v2[y][x];
		}
	}
	return;
}