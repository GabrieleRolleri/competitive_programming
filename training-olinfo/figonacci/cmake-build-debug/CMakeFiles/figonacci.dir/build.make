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
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\figonacci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/figonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/figonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/figonacci.dir/flags.make

CMakeFiles/figonacci.dir/main.cpp.obj: CMakeFiles/figonacci.dir/flags.make
CMakeFiles/figonacci.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/figonacci.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\figonacci.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\main.cpp

CMakeFiles/figonacci.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/figonacci.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\main.cpp > CMakeFiles\figonacci.dir\main.cpp.i

CMakeFiles/figonacci.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/figonacci.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\main.cpp -o CMakeFiles\figonacci.dir\main.cpp.s

# Object files for target figonacci
figonacci_OBJECTS = \
"CMakeFiles/figonacci.dir/main.cpp.obj"

# External object files for target figonacci
figonacci_EXTERNAL_OBJECTS =

figonacci.exe: CMakeFiles/figonacci.dir/main.cpp.obj
figonacci.exe: CMakeFiles/figonacci.dir/build.make
figonacci.exe: CMakeFiles/figonacci.dir/linklibs.rsp
figonacci.exe: CMakeFiles/figonacci.dir/objects1.rsp
figonacci.exe: CMakeFiles/figonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable figonacci.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\figonacci.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/figonacci.dir/build: figonacci.exe

.PHONY : CMakeFiles/figonacci.dir/build

CMakeFiles/figonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\figonacci.dir\cmake_clean.cmake
.PHONY : CMakeFiles/figonacci.dir/clean

CMakeFiles/figonacci.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\figonacci C:\Users\Gabriele\CLionProjects\Allenamento\figonacci C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\figonacci\cmake-build-debug\CMakeFiles\figonacci.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/figonacci.dir/depend

