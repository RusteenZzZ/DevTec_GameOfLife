# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rusteen/DevTecs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rusteen/DevTecs/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/main.c.o   -c /home/rusteen/DevTecs/main.c

CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/main.c > CMakeFiles/main.dir/main.c.i

CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/main.c -o CMakeFiles/main.dir/main.c.s

CMakeFiles/main.dir/game/game.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/game/game.c.o: ../game/game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/main.dir/game/game.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/game/game.c.o   -c /home/rusteen/DevTecs/game/game.c

CMakeFiles/main.dir/game/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/game/game.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/game/game.c > CMakeFiles/main.dir/game/game.c.i

CMakeFiles/main.dir/game/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/game/game.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/game/game.c -o CMakeFiles/main.dir/game/game.c.s

CMakeFiles/main.dir/board_animation/delay.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/delay.c.o: ../board_animation/delay.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/main.dir/board_animation/delay.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/delay.c.o   -c /home/rusteen/DevTecs/board_animation/delay.c

CMakeFiles/main.dir/board_animation/delay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/delay.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/delay.c > CMakeFiles/main.dir/board_animation/delay.c.i

CMakeFiles/main.dir/board_animation/delay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/delay.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/delay.c -o CMakeFiles/main.dir/board_animation/delay.c.s

CMakeFiles/main.dir/board_animation/fill_board.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/fill_board.c.o: ../board_animation/fill_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/main.dir/board_animation/fill_board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/fill_board.c.o   -c /home/rusteen/DevTecs/board_animation/fill_board.c

CMakeFiles/main.dir/board_animation/fill_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/fill_board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/fill_board.c > CMakeFiles/main.dir/board_animation/fill_board.c.i

CMakeFiles/main.dir/board_animation/fill_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/fill_board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/fill_board.c -o CMakeFiles/main.dir/board_animation/fill_board.c.s

CMakeFiles/main.dir/board_animation/init_board.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/init_board.c.o: ../board_animation/init_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/main.dir/board_animation/init_board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/init_board.c.o   -c /home/rusteen/DevTecs/board_animation/init_board.c

CMakeFiles/main.dir/board_animation/init_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/init_board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/init_board.c > CMakeFiles/main.dir/board_animation/init_board.c.i

CMakeFiles/main.dir/board_animation/init_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/init_board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/init_board.c -o CMakeFiles/main.dir/board_animation/init_board.c.s

CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o: ../board_animation/init_gospers_glider_gun.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o   -c /home/rusteen/DevTecs/board_animation/init_gospers_glider_gun.c

CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/init_gospers_glider_gun.c > CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.i

CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/init_gospers_glider_gun.c -o CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.s

CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o: ../board_animation/next_generation_board_clipped.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o   -c /home/rusteen/DevTecs/board_animation/next_generation_board_clipped.c

CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/next_generation_board_clipped.c > CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.i

CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/next_generation_board_clipped.c -o CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.s

CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o: ../board_animation/next_generation_board_circular.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o   -c /home/rusteen/DevTecs/board_animation/next_generation_board_circular.c

CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/next_generation_board_circular.c > CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.i

CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/next_generation_board_circular.c -o CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.s

CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o: ../board_animation/num_of_neighbours_clipped.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o   -c /home/rusteen/DevTecs/board_animation/num_of_neighbours_clipped.c

CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/num_of_neighbours_clipped.c > CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.i

CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/num_of_neighbours_clipped.c -o CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.s

CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o: ../board_animation/num_of_neighbours_circular.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o   -c /home/rusteen/DevTecs/board_animation/num_of_neighbours_circular.c

CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/num_of_neighbours_circular.c > CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.i

CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/num_of_neighbours_circular.c -o CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.s

CMakeFiles/main.dir/board_animation/print_board.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/print_board.c.o: ../board_animation/print_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/main.dir/board_animation/print_board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/print_board.c.o   -c /home/rusteen/DevTecs/board_animation/print_board.c

CMakeFiles/main.dir/board_animation/print_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/print_board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/print_board.c > CMakeFiles/main.dir/board_animation/print_board.c.i

CMakeFiles/main.dir/board_animation/print_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/print_board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/print_board.c -o CMakeFiles/main.dir/board_animation/print_board.c.s

CMakeFiles/main.dir/board_animation/update_board.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/board_animation/update_board.c.o: ../board_animation/update_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/main.dir/board_animation/update_board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/board_animation/update_board.c.o   -c /home/rusteen/DevTecs/board_animation/update_board.c

CMakeFiles/main.dir/board_animation/update_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/board_animation/update_board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rusteen/DevTecs/board_animation/update_board.c > CMakeFiles/main.dir/board_animation/update_board.c.i

CMakeFiles/main.dir/board_animation/update_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/board_animation/update_board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rusteen/DevTecs/board_animation/update_board.c -o CMakeFiles/main.dir/board_animation/update_board.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/game/game.c.o" \
"CMakeFiles/main.dir/board_animation/delay.c.o" \
"CMakeFiles/main.dir/board_animation/fill_board.c.o" \
"CMakeFiles/main.dir/board_animation/init_board.c.o" \
"CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o" \
"CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o" \
"CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o" \
"CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o" \
"CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o" \
"CMakeFiles/main.dir/board_animation/print_board.c.o" \
"CMakeFiles/main.dir/board_animation/update_board.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.c.o
main: CMakeFiles/main.dir/game/game.c.o
main: CMakeFiles/main.dir/board_animation/delay.c.o
main: CMakeFiles/main.dir/board_animation/fill_board.c.o
main: CMakeFiles/main.dir/board_animation/init_board.c.o
main: CMakeFiles/main.dir/board_animation/init_gospers_glider_gun.c.o
main: CMakeFiles/main.dir/board_animation/next_generation_board_clipped.c.o
main: CMakeFiles/main.dir/board_animation/next_generation_board_circular.c.o
main: CMakeFiles/main.dir/board_animation/num_of_neighbours_clipped.c.o
main: CMakeFiles/main.dir/board_animation/num_of_neighbours_circular.c.o
main: CMakeFiles/main.dir/board_animation/print_board.c.o
main: CMakeFiles/main.dir/board_animation/update_board.c.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rusteen/DevTecs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/rusteen/DevTecs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rusteen/DevTecs /home/rusteen/DevTecs /home/rusteen/DevTecs/build /home/rusteen/DevTecs/build /home/rusteen/DevTecs/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

