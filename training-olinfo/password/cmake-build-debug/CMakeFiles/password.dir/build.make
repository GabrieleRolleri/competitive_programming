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
CMAKE_SOURCE_DIR = /home/gabriele/repos/competitive_programming/training-olinfo/password

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/password.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/password.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/password.dir/flags.make

CMakeFiles/password.dir/main.cpp.o: CMakeFiles/password.dir/flags.make
CMakeFiles/password.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/password.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/password.dir/main.cpp.o -c /home/gabriele/repos/competitive_programming/training-olinfo/password/main.cpp

CMakeFiles/password.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/password.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/repos/competitive_programming/training-olinfo/password/main.cpp > CMakeFiles/password.dir/main.cpp.i

CMakeFiles/password.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/password.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/repos/competitive_programming/training-olinfo/password/main.cpp -o CMakeFiles/password.dir/main.cpp.s

# Object files for target password
password_OBJECTS = \
"CMakeFiles/password.dir/main.cpp.o"

# External object files for target password
password_EXTERNAL_OBJECTS =

password: CMakeFiles/password.dir/main.cpp.o
password: CMakeFiles/password.dir/build.make
password: CMakeFiles/password.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable password"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/password.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/password.dir/build: password

.PHONY : CMakeFiles/password.dir/build

CMakeFiles/password.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/password.dir/cmake_clean.cmake
.PHONY : CMakeFiles/password.dir/clean

CMakeFiles/password.dir/depend:
	cd /home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/repos/competitive_programming/training-olinfo/password /home/gabriele/repos/competitive_programming/training-olinfo/password /home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug /home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug /home/gabriele/repos/competitive_programming/training-olinfo/password/cmake-build-debug/CMakeFiles/password.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/password.dir/depend

