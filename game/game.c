#include "game.h"

void game_loop(){

	int board_v1[SIZE][SIZE];
	int board_v2[SIZE][SIZE];

	init_board(board_v1);
	init_board(board_v2);

	fill_board(board_v1);

	// print_board(board_v1);

	long long loop = 1;

	while(loop != LOOP_LIMIT){
		delay(DELAY);

		clear_screen();
		next_generation_board_clipped(board_v1, board_v2);
		update_board(board_v1, board_v2);
		print_board(board_v1);

		loop++;
	}
}