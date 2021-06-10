#include "next_generation_board.h"

void next_generation_board(int board_v1[SIZE][SIZE], int board_v2[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){

			if(board_v1[y][x] == ALIVE){
				if(num_of_neighbours(board_v1, x, y) != 2 && num_of_neighbours(board_v1, x, y) != 3)
					board_v2[y][x] = DEAD;
				else
					board_v2[y][x] = ALIVE;

			}else {

				if(num_of_neighbours(board_v1, x, y) == 3)
					board_v2[y][x] = ALIVE;
				else
					board_v2[y][x] = DEAD;

			}

		}
	}

	return;
}
