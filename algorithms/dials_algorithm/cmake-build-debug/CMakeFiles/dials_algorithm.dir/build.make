# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dials_algorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dials_algorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dials_algorithm.dir/flags.make

CMakeFiles/dials_algorithm.dir/main.cpp.o: CMakeFiles/dials_algorithm.dir/flags.make
CMakeFiles/dials_algorithm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dials_algorithm.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dials_algorithm.dir/main.cpp.o -c /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/main.cpp

CMakeFiles/dials_algorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dials_algorithm.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/main.cpp > CMakeFiles/dials_algorithm.dir/main.cpp.i

CMakeFiles/dials_algorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dials_algorithm.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/main.cpp -o CMakeFiles/dials_algorithm.dir/main.cpp.s

# Object files for target dials_algorithm
dials_algorithm_OBJECTS = \
"CMakeFiles/dials_algorithm.dir/main.cpp.o"

# External object files for target dials_algorithm
dials_algorithm_EXTERNAL_OBJECTS =

dials_algorithm: CMakeFiles/dials_algorithm.dir/main.cpp.o
dials_algorithm: CMakeFiles/dials_algorithm.dir/build.make
dials_algorithm: CMakeFiles/dials_algorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dials_algorithm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dials_algorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dials_algorithm.dir/build: dials_algorithm

.PHONY : CMakeFiles/dials_algorithm.dir/build

CMakeFiles/dials_algorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dials_algorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dials_algorithm.dir/clean

CMakeFiles/dials_algorithm.dir/depend:
	cd /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug /home/gabriele/Repos/competitive_programming/algorithms/dials_algorithm/cmake-build-debug/CMakeFiles/dials_algorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dials_algorithm.dir/depend

