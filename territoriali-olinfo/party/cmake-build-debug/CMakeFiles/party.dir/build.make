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
CMAKE_SOURCE_DIR = /home/gabriele/repos/competitive_programming/territoriali-olinfo/party

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/party.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/party.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/party.dir/flags.make

CMakeFiles/party.dir/main.cpp.o: CMakeFiles/party.dir/flags.make
CMakeFiles/party.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/party.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/party.dir/main.cpp.o -c /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/main.cpp

CMakeFiles/party.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/party.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/main.cpp > CMakeFiles/party.dir/main.cpp.i

CMakeFiles/party.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/party.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/main.cpp -o CMakeFiles/party.dir/main.cpp.s

# Object files for target party
party_OBJECTS = \
"CMakeFiles/party.dir/main.cpp.o"

# External object files for target party
party_EXTERNAL_OBJECTS =

party: CMakeFiles/party.dir/main.cpp.o
party: CMakeFiles/party.dir/build.make
party: CMakeFiles/party.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable party"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/party.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/party.dir/build: party

.PHONY : CMakeFiles/party.dir/build

CMakeFiles/party.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/party.dir/cmake_clean.cmake
.PHONY : CMakeFiles/party.dir/clean

CMakeFiles/party.dir/depend:
	cd /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriele/repos/competitive_programming/territoriali-olinfo/party /home/gabriele/repos/competitive_programming/territoriali-olinfo/party /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug /home/gabriele/repos/competitive_programming/territoriali-olinfo/party/cmake-build-debug/CMakeFiles/party.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/party.dir/depend
