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
CMAKE_SOURCE_DIR = /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/knuth_morris_pratt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/knuth_morris_pratt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/knuth_morris_pratt.dir/flags.make

CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o: CMakeFiles/knuth_morris_pratt.dir/flags.make
CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o: ../practice2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o -c /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/practice2.cpp

CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/practice2.cpp > CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.i

CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/practice2.cpp -o CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.s

# Object files for target knuth_morris_pratt
knuth_morris_pratt_OBJECTS = \
"CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o"

# External object files for target knuth_morris_pratt
knuth_morris_pratt_EXTERNAL_OBJECTS =

knuth_morris_pratt: CMakeFiles/knuth_morris_pratt.dir/practice2.cpp.o
knuth_morris_pratt: CMakeFiles/knuth_morris_pratt.dir/build.make
knuth_morris_pratt: CMakeFiles/knuth_morris_pratt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable knuth_morris_pratt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/knuth_morris_pratt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/knuth_morris_pratt.dir/build: knuth_morris_pratt

.PHONY : CMakeFiles/knuth_morris_pratt.dir/build

CMakeFiles/knuth_morris_pratt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/knuth_morris_pratt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/knuth_morris_pratt.dir/clean

CMakeFiles/knuth_morris_pratt.dir/depend:
	cd /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug /home/gabriele/Repos/competitive_programming/algorithms/knuth-morris-pratt/cmake-build-debug/CMakeFiles/knuth_morris_pratt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/knuth_morris_pratt.dir/depend

