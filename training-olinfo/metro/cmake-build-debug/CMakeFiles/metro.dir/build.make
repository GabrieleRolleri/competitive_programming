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
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\metro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/metro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/metro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/metro.dir/flags.make

CMakeFiles/metro.dir/main.cpp.obj: CMakeFiles/metro.dir/flags.make
CMakeFiles/metro.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/metro.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\metro.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\metro\main.cpp

CMakeFiles/metro.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/metro.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\metro\main.cpp > CMakeFiles\metro.dir\main.cpp.i

CMakeFiles/metro.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/metro.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\metro\main.cpp -o CMakeFiles\metro.dir\main.cpp.s

# Object files for target metro
metro_OBJECTS = \
"CMakeFiles/metro.dir/main.cpp.obj"

# External object files for target metro
metro_EXTERNAL_OBJECTS =

metro.exe: CMakeFiles/metro.dir/main.cpp.obj
metro.exe: CMakeFiles/metro.dir/build.make
metro.exe: CMakeFiles/metro.dir/linklibs.rsp
metro.exe: CMakeFiles/metro.dir/objects1.rsp
metro.exe: CMakeFiles/metro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable metro.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\metro.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/metro.dir/build: metro.exe

.PHONY : CMakeFiles/metro.dir/build

CMakeFiles/metro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\metro.dir\cmake_clean.cmake
.PHONY : CMakeFiles/metro.dir/clean

CMakeFiles/metro.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\metro C:\Users\Gabriele\CLionProjects\Allenamento\metro C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\metro\cmake-build-debug\CMakeFiles\metro.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/metro.dir/depend

