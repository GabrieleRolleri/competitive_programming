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
CMAKE_COMMAND = /snap/clion/137/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/137/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabriele/Repos/competitive_programming/data-structures/segment_tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/segment_tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/segment_tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/segment_tree.dir/flags.make

CMakeFiles/segment_tree.dir/main.cpp.o: CMakeFiles/segment_tree.dir/flags.make
CMakeFiles/segment_tree.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/segment_tree.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/segment_tree.dir/main.cpp.o -c /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/main.cpp

CMakeFiles/segment_tree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/segment_tree.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/main.cpp > CMakeFiles/segment_tree.dir/main.cpp.i

CMakeFiles/segment_tree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/segment_tree.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/main.cpp -o CMakeFiles/segment_tree.dir/main.cpp.s

# Object files for target segment_tree
segment_tree_OBJECTS = \
"CMakeFiles/segment_tree.dir/main.cpp.o"

# External object files for target segment_tree
segment_tree_EXTERNAL_OBJECTS =

segment_tree: CMakeFiles/segment_tree.dir/main.cpp.o
segment_tree: CMakeFiles/segment_tree.dir/build.make
segment_tree: CMakeFiles/segment_tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable segment_tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/segment_tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/segment_tree.dir/build: segment_tree

.PHONY : CMakeFiles/segment_tree.dir/build

CMakeFiles/segment_tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/segment_tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/segment_tree.dir/clean

CMakeFiles/segment_tree.dir/depend:
	cd /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/Repos/competitive_programming/data-structures/segment_tree /home/gabriele/Repos/competitive_programming/data-structures/segment_tree /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug /home/gabriele/Repos/competitive_programming/data-structures/segment_tree/cmake-build-debug/CMakeFiles/segment_tree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/segment_tree.dir/depend

