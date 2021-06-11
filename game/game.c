#include "game.h"

void game_loop(int option){

	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window *window = SDL_CreateWindow("Game of Life", 0, 0, SIZE*CELL_SIZE, SIZE*CELL_SIZE, SDL_WINDOW_OPENGL);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	int board_v1[SIZE][SIZE];
	int board_v2[SIZE][SIZE];

	if(option == 3){
		if(init_gospers_glider_gun(board_v1) == -1) {
			SDL_DestroyRenderer(renderer);
			SDL_DestroyWindow(window);
			SDL_Quit();
			return;
		}
	}else{
		init_board(board_v1);
		init_board(board_v2);

		fill_board(board_v1);
	}

	long long loop = 1;

	bool running = true;

	SDL_Event event;

	while(loop != LOOP_LIMIT && running){
		SDL_Delay(DELAY);

		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				running = false;
			}
		}

		switch(option){
			case 1:
				next_generation_board_clipped(board_v1, board_v2);
				break;
			case 2:
				next_generation_board_circular(board_v1, board_v2);
				break;
			default:
				next_generation_board_clipped(board_v1, board_v2);
		}

		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);

		update_board(board_v1, board_v2);
		print_board(board_v1, renderer);

		SDL_RenderPresent(renderer);

		loop++;
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	
}