#include "print_board.h"

void print_board(int board[SIZE][SIZE], SDL_Renderer *renderer){
	SDL_Rect r;
	r.w = CELL_SIZE*1;
	r.h = CELL_SIZE*1;
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			r.x = x * CELL_SIZE;
			r.y = y * CELL_SIZE;
			if(board[y][x] == ALIVE) {
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
				SDL_RenderDrawRect(renderer, &r);
			}
			else {
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				SDL_RenderDrawRect(renderer, &r);
			}
			SDL_RenderFillRect(renderer, &r );
		}
	}
}
