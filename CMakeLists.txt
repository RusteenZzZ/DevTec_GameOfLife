cmake_minimum_required(VERSION 3.16)

project(Game_of_Life)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(main main.c game/game.c board_animation/delay.c board_animation/fill_board.c board_animation/init_board.c board_animation/init_gospers_glider_gun.c board_animation/next_generation_board_clipped.c board_animation/next_generation_board_circular.c board_animation/num_of_neighbours_clipped.c board_animation/num_of_neighbours_circular.c board_animation/print_board.c board_animation/update_board.c)

target_link_libraries(main ${SDL2_LIBRARIES})

add_custom_target(test gcc ../unit_tests.c ../board_animation/init_board.c ../board_animation/next_generation_board_clipped.c ../board_animation/next_generation_board_circular.c ../board_animation/num_of_neighbours_clipped.c ../board_animation/num_of_neighbours_circular.c ../board_animation/update_board.c -o test -lcunit)

add_custom_target(doc doxygen ../docs_conf)

add_custom_target(dist zip -r compressed.zip ./../)