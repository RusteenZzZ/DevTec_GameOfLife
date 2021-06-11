#include "print_board.h"

void print_board(int board[SIZE][SIZE], SDL_Renderer *renderer){
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			if(board[y][x] == ALIVE) {
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
				SDL_RenderDrawPoint(renderer, x, y);
				// printf(ANSI_COLOR_RED "  " ANSI_COLOR_RESET);
			}
			else {
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				SDL_RenderDrawPoint(renderer, x, y);
				// printf(ANSI_COLOR_WHITE "  " ANSI_COLOR_RESET);
			}
		}
		printf("\n");
	}
}
