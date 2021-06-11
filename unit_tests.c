#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include <CUnit/Console.h>
#include "const.h"
#include "board_animation/init_board.h"
#include "board_animation/next_generation_board_circular.h"
#include "board_animation/next_generation_board_clipped.h"
#include "board_animation/num_of_neighbours_circular.h"
#include "board_animation/num_of_neighbours_clipped.h"
#include "board_animation/update_board.h"

void test_consts(){
  CU_ASSERT_EQUAL(ALIVE, 1);
  CU_ASSERT_EQUAL(DEAD, 0);
  CU_ASSERT_EQUAL(BORDER, SIZE-1);
}

void test_init_board(){
  int board[SIZE][SIZE];

  init_board(board);

  for(int y=0; y<SIZE; y++){
    for(int x=0; x<SIZE; x++){
      CU_ASSERT_EQUAL(board[y][x], DEAD)
    }
  }
}

void test_num_of_neighbours_clipped(){
  int board[SIZE][SIZE];

  init_board(board);

  board[1][0] = ALIVE;
  board[BORDER][BORDER] = ALIVE;

  CU_ASSERT_EQUAL(num_of_neighbours_clipped(board, 0, 0), 1);
}

void test_num_of_neighbours_circular(){
  int board[SIZE][SIZE];

  init_board(board);

  board[1][0] = ALIVE;
  board[BORDER][BORDER] = ALIVE;

  CU_ASSERT_EQUAL(num_of_neighbours_circular(board, 0, 0), 2);
}

void test_next_generation_board_clipped(){
  int board1[SIZE][SIZE];
  int board2[SIZE][SIZE];

  init_board(board1);

  board1[1][0] = ALIVE;
  board1[1][1] = ALIVE;
  board1[0][1] = ALIVE;

  board1[BORDER][BORDER] = ALIVE;
  board1[BORDER][BORDER-1] = ALIVE;

  next_generation_board_clipped(board1, board2);
  
  CU_ASSERT_EQUAL(board2[0][0], ALIVE);
  CU_ASSERT_EQUAL(board2[BORDER][BORDER], DEAD);
}

void test_next_generation_board_circular(){
  int board1[SIZE][SIZE];
  int board2[SIZE][SIZE];

  init_board(board1);

  board1[BORDER][BORDER] = ALIVE;
  board1[0][BORDER] = ALIVE;
  board1[BORDER][0] = ALIVE;

  board1[BORDER-1][0] = ALIVE;
  board1[BORDER-1][1] = ALIVE;

  next_generation_board_circular(board1, board2);
  
  CU_ASSERT_EQUAL(board2[0][0], ALIVE);
  CU_ASSERT_EQUAL(board2[BORDER][0], DEAD);
}

void test_update_board(){
  int board1[SIZE][SIZE];
  int board2[SIZE][SIZE];

  init_board(board1);
  init_board(board2);

  board1[0][0] = ALIVE;

  update_board(board2, board1);

  CU_ASSERT_EQUAL(board2[0][0], ALIVE);
}

int main(){
  CU_initialize_registry();

  CU_pSuite consts = CU_add_suite("Consts", NULL, NULL);
  CU_pSuite functions = CU_add_suite("Functions", NULL, NULL);
  
  CU_ADD_TEST(consts, test_consts);

  CU_ADD_TEST(functions, test_init_board);
  CU_ADD_TEST(functions, test_num_of_neighbours_clipped);
  CU_ADD_TEST(functions, test_num_of_neighbours_circular);
  CU_ADD_TEST(functions, test_next_generation_board_clipped);
  CU_ADD_TEST(functions, test_next_generation_board_circular);
  CU_ADD_TEST(functions, test_update_board);

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  return CU_get_number_of_failures();
}