#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "clear_screen.h"

#define SIZE 8
#define BORDER SIZE-1
#define DELAY 500 /** In milliseconds */
#define FILLING_CHANCE 30 /** In percentage */
#define LOOP_LIMIT 0 /** 0 or less means infinity times */

#define DEAD 0
#define ALIVE 1

#define ANSI_COLOR_RED     "\x1b[41m"
#define ANSI_COLOR_WHITE	 "\x1b[47m"
#define ANSI_COLOR_RESET   "\x1b[0m"

/**
 * @param number_of_second How many seconds will it delay
 */
void delay(int number_of_seconds)
{
  int milli_seconds = 1000 * number_of_seconds;
  clock_t start_time = clock();
  while (clock() < start_time + milli_seconds);
}

/**
 * @param board The board that will be randomly filled with living tyles
 * @return The board is a pointer, so no need for any return
 */
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

/**
 * @param board The board itself
 * @param x The x coordinate of the checked tyle
 * @param y The y coordinate of the checked tyle
 * @return The number of alive tyles in the vicinity of the sent tyle
 */
int num_of_neighbours(int board[SIZE][SIZE], int x, int y){
	int num = 0;

	if(x == 0 && y == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		return num;
	}else if(x == BORDER && y == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
		return num;
	}else if(x == BORDER && y == SIZE){
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
		return num;
	}else if(x == 0 && y == BORDER){
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		return num;
	} 
	else if(x == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
		return num;
	}
	else if(x == BORDER){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
		return num;
	}
	else if(y == 0){
		if(board[y][x-1] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		return num;
	}
	else if(y == BORDER){
		if(board[y][x-1] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		return num;
	}
	else{
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		return num;
	}
	return -1;
}

/**
 * @param board_v1 The board of time t
 * @param board_v2 The board of time t+1
 */
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

/**
 * @param board_v1 The board of time t
 * @param board_v2 The board of time t+1
 * @return board_v1 is a pointer, no need to return it
 */
void update_board(int board_v1[SIZE][SIZE], int board_v2[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			board_v1[y][x] = board_v2[y][x];
		}
	}
	return;
}

/**
 * @param board The board that will be initialized as empty
 * @return The board is a pointer, so no need for any return
 */
void init_board(int board[SIZE][SIZE]){
	for(int y=0; y<SIZE; y++)
		for(int x=0; x<SIZE; x++)	board[y][x] = DEAD;
	return;
}

/**
 * @param board The board that will be printed
 */
void print_board(int board[SIZE][SIZE]){
	// for(int i=0; i<SIZE; i++) printf("- ");
	// printf("\n");

	for(int y=0; y<SIZE; y++){
		for(int x=0; x<SIZE; x++){
			if(board[y][x] == ALIVE) printf(ANSI_COLOR_RED "  " ANSI_COLOR_RESET);
			else printf(ANSI_COLOR_WHITE "  " ANSI_COLOR_RESET);
		}
		printf("\n");
	}

	// for(int i=0; i<SIZE; i++) printf("- ");
	// printf("\n");
}

int main(){

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
		next_generation_board(board_v1, board_v2);
		update_board(board_v1, board_v2);
		print_board(board_v1);

		loop++;
	}

	return 0;
}
