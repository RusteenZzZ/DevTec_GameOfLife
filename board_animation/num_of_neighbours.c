#include "num_of_neighbours.h"

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
