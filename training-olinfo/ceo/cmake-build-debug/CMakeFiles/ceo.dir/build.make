# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/gabriele/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gabriele/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabriele/repos/competitive_programming/training-olinfo/ceo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ceo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ceo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ceo.dir/flags.make

CMakeFiles/ceo.dir/main.cpp.o: CMakeFiles/ceo.dir/flags.make
CMakeFiles/ceo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ceo.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ceo.dir/main.cpp.o -c /home/gabriele/repos/competitive_programming/training-olinfo/ceo/main.cpp

CMakeFiles/ceo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ceo.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/repos/competitive_programming/training-olinfo/ceo/main.cpp > CMakeFiles/ceo.dir/main.cpp.i

CMakeFiles/ceo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ceo.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/repos/competitive_programming/training-olinfo/ceo/main.cpp -o CMakeFiles/ceo.dir/main.cpp.s

# Object files for target ceo
ceo_OBJECTS = \
"CMakeFiles/ceo.dir/main.cpp.o"

# External object files for target ceo
ceo_EXTERNAL_OBJECTS =

ceo: CMakeFiles/ceo.dir/main.cpp.o
ceo: CMakeFiles/ceo.dir/build.make
ceo: CMakeFiles/ceo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ceo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ceo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ceo.dir/build: ceo

.PHONY : CMakeFiles/ceo.dir/build

CMakeFiles/ceo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ceo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ceo.dir/clean

CMakeFiles/ceo.dir/depend:
	cd /home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/repos/competitive_programming/training-olinfo/ceo /home/gabriele/repos/competitive_programming/training-olinfo/ceo /home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug /home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug /home/gabriele/repos/competitive_programming/training-olinfo/ceo/cmake-build-debug/CMakeFiles/ceo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ceo.dir/depend

