cmake_minimum_required(VERSION 3.16)

project(Game_of_Life)

if (UNIX)
  add_executable(main main.c game/game.c board_animation/delay.c board_animation/fill_board.c board_animation/init_board.c board_animation/next_generation_board.c board_animation/num_of_neighbours.c board_animation/print_board.c board_animation/update_board.c board_animation/clear_screen_posix.c)
elseif (WIN32)
  add_executable(main main.c game/game.c board_animation/delay.c board_animation/fill_board.c board_animation/init_board.c board_animation/next_generation_board.c board_animation/num_of_neighbours.c board_animation/print_board.c board_animation/update_board.c board_animation/clear_screen_windows.c)
endif (UNIX)

add_custom_target(doc doxygen ../docs_conf)

add_custom_target(dist zip -r compressed.zip ./../)