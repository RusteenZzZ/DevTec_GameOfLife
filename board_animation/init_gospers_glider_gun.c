#include "init_gospers_glider_gun.h"

int init_gospers_glider_gun(int board[SIZE][SIZE]){
  if(SIZE < 36) {
    printf("Minimum 36 SIZE is required. Check your const.h file\n");
    return -1;
  }

  init_board(board);

  board[4][0] = ALIVE;
  board[5][0] = ALIVE;
  board[4][1] = ALIVE;
  board[5][1] = ALIVE;

  board[2][34] = ALIVE;
  board[3][34] = ALIVE;
  board[2][35] = ALIVE;
  board[3][35] = ALIVE;

  board[0][24] = ALIVE;
  board[1][22] = ALIVE;
  board[1][24] = ALIVE;
  board[2][12] = ALIVE;
  board[2][13] = ALIVE;
  board[2][20] = ALIVE;
  board[2][21] = ALIVE;
  board[3][11] = ALIVE;
  board[3][15] = ALIVE;
  board[3][20] = ALIVE;
  board[3][21] = ALIVE;
  board[4][10] = ALIVE;
  board[4][16] = ALIVE;
  board[4][20] = ALIVE;
  board[4][21] = ALIVE;
  board[5][10] = ALIVE;
  board[5][14] = ALIVE;
  board[5][16] = ALIVE;
  board[5][17] = ALIVE;
  board[5][22] = ALIVE;
  board[5][24] = ALIVE;
  board[6][10] = ALIVE;
  board[6][16] = ALIVE;
  board[6][24] = ALIVE;
  board[7][11] = ALIVE;
  board[7][15] = ALIVE;
  board[8][12] = ALIVE;
  board[8][13] = ALIVE;

  return 0;
}
