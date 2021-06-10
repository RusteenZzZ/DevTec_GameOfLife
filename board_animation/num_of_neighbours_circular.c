#include "num_of_neighbours_circular.h"

int num_of_neighbours_circular(int board[SIZE][SIZE], int x, int y){
	int num = 0;

	if(x == 0 && y == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
    if(board[0][SIZE-1] == ALIVE) num++;
    if(board[1][SIZE-1] == ALIVE) num++;
    if(board[SIZE-1][0] == ALIVE) num++;
    if(board[SIZE-1][1] == ALIVE) num++;
    if(board[SIZE-1][SIZE-1] == ALIVE) num++;
		return num;
	}else if(x == BORDER && y == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
    if(board[0][0] == ALIVE) num++;
    if(board[1][0] == ALIVE) num++;
    if(board[SIZE-1][SIZE-1] == ALIVE) num++;
    if(board[SIZE-1][SIZE-2] == ALIVE) num++;
    if(board[SIZE-1][0] == ALIVE) num++;
		return num;
	}else if(x == BORDER && y == BORDER){
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
    if(board[0][SIZE-1] == ALIVE) num++;
    if(board[0][SIZE-2] == ALIVE) num++;
    if(board[SIZE-1][0] == ALIVE) num++;
    if(board[SIZE-2][0] == ALIVE) num++;
    if(board[0][0] == ALIVE) num++;
		return num;
	}else if(x == 0 && y == BORDER){
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
    if(board[0][0] == ALIVE) num++;
    if(board[0][1] == ALIVE) num++;
    if(board[SIZE-1][SIZE-1] == ALIVE) num++;
    if(board[SIZE-2][SIZE-1] == ALIVE) num++;
    if(board[0][SIZE-1] == ALIVE) num++;
		return num;
	} 
	else if(x == 0){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
    if(board[y-1][SIZE-1] == ALIVE) num++;
    if(board[y][SIZE-1] == ALIVE) num++;
    if(board[y+1][SIZE-1] == ALIVE) num++;
		return num;
	}
	else if(x == BORDER){
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y][x-1] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
    if(board[y-1][0] == ALIVE) num++;
    if(board[y][0] == ALIVE) num++;
    if(board[y+1][0] == ALIVE) num++;
		return num;
	}
	else if(y == 0){
		if(board[y][x-1] == ALIVE) num++;
		if(board[y+1][x-1] == ALIVE) num++;
		if(board[y+1][x] == ALIVE) num++;
		if(board[y+1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
    if(board[SIZE-1][x-1] == ALIVE) num++;
    if(board[SIZE-1][x] == ALIVE) num++;
    if(board[SIZE-1][x+1] == ALIVE) num++;
		return num;
	}
	else if(y == BORDER){
		if(board[y][x-1] == ALIVE) num++;
		if(board[y-1][x-1] == ALIVE) num++;
		if(board[y-1][x] == ALIVE) num++;
		if(board[y-1][x+1] == ALIVE) num++;
		if(board[y][x+1] == ALIVE) num++;
    if(board[0][x-1] == ALIVE) num++;
    if(board[0][x] == ALIVE) num++;
    if(board[0][x+1] == ALIVE) num++;
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
