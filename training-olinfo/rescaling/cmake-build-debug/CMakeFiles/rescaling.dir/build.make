# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\rescaling

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rescaling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rescaling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rescaling.dir/flags.make

CMakeFiles/rescaling.dir/main.cpp.obj: CMakeFiles/rescaling.dir/flags.make
CMakeFiles/rescaling.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rescaling.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\rescaling.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\main.cpp

CMakeFiles/rescaling.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rescaling.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\main.cpp > CMakeFiles\rescaling.dir\main.cpp.i

CMakeFiles/rescaling.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rescaling.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\main.cpp -o CMakeFiles\rescaling.dir\main.cpp.s

# Object files for target rescaling
rescaling_OBJECTS = \
"CMakeFiles/rescaling.dir/main.cpp.obj"

# External object files for target rescaling
rescaling_EXTERNAL_OBJECTS =

rescaling.exe: CMakeFiles/rescaling.dir/main.cpp.obj
rescaling.exe: CMakeFiles/rescaling.dir/build.make
rescaling.exe: CMakeFiles/rescaling.dir/linklibs.rsp
rescaling.exe: CMakeFiles/rescaling.dir/objects1.rsp
rescaling.exe: CMakeFiles/rescaling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rescaling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\rescaling.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rescaling.dir/build: rescaling.exe

.PHONY : CMakeFiles/rescaling.dir/build

CMakeFiles/rescaling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\rescaling.dir\cmake_clean.cmake
.PHONY : CMakeFiles/rescaling.dir/clean

CMakeFiles/rescaling.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\rescaling C:\Users\Gabriele\CLionProjects\Allenamento\rescaling C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\rescaling\cmake-build-debug\CMakeFiles\rescaling.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rescaling.dir/depend
