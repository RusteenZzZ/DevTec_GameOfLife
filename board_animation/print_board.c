#include "print_board.h"

void print_board(int board[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			if(board[y][x] == ALIVE) printf(ANSI_COLOR_RED "  " ANSI_COLOR_RESET);
			else printf(ANSI_COLOR_WHITE "  " ANSI_COLOR_RESET);
		}
		printf("\n");
	}
}
