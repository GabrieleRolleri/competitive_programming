# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\pozzo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pozzo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pozzo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pozzo.dir/flags.make

CMakeFiles/pozzo.dir/main.cpp.obj: CMakeFiles/pozzo.dir/flags.make
CMakeFiles/pozzo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pozzo.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pozzo.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\main.cpp

CMakeFiles/pozzo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pozzo.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\main.cpp > CMakeFiles\pozzo.dir\main.cpp.i

CMakeFiles/pozzo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pozzo.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\main.cpp -o CMakeFiles\pozzo.dir\main.cpp.s

# Object files for target pozzo
pozzo_OBJECTS = \
"CMakeFiles/pozzo.dir/main.cpp.obj"

# External object files for target pozzo
pozzo_EXTERNAL_OBJECTS =

pozzo.exe: CMakeFiles/pozzo.dir/main.cpp.obj
pozzo.exe: CMakeFiles/pozzo.dir/build.make
pozzo.exe: CMakeFiles/pozzo.dir/linklibs.rsp
pozzo.exe: CMakeFiles/pozzo.dir/objects1.rsp
pozzo.exe: CMakeFiles/pozzo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pozzo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pozzo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pozzo.dir/build: pozzo.exe

.PHONY : CMakeFiles/pozzo.dir/build

CMakeFiles/pozzo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pozzo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pozzo.dir/clean

CMakeFiles/pozzo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\pozzo C:\Users\Gabriele\CLionProjects\Allenamento\pozzo C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\pozzo\cmake-build-debug\CMakeFiles\pozzo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pozzo.dir/depend

