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
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\spectre

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/spectre.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spectre.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spectre.dir/flags.make

CMakeFiles/spectre.dir/main.cpp.obj: CMakeFiles/spectre.dir/flags.make
CMakeFiles/spectre.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spectre.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\spectre.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\spectre\main.cpp

CMakeFiles/spectre.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spectre.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\spectre\main.cpp > CMakeFiles\spectre.dir\main.cpp.i

CMakeFiles/spectre.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spectre.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\spectre\main.cpp -o CMakeFiles\spectre.dir\main.cpp.s

# Object files for target spectre
spectre_OBJECTS = \
"CMakeFiles/spectre.dir/main.cpp.obj"

# External object files for target spectre
spectre_EXTERNAL_OBJECTS =

spectre.exe: CMakeFiles/spectre.dir/main.cpp.obj
spectre.exe: CMakeFiles/spectre.dir/build.make
spectre.exe: CMakeFiles/spectre.dir/linklibs.rsp
spectre.exe: CMakeFiles/spectre.dir/objects1.rsp
spectre.exe: CMakeFiles/spectre.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spectre.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\spectre.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spectre.dir/build: spectre.exe

.PHONY : CMakeFiles/spectre.dir/build

CMakeFiles/spectre.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\spectre.dir\cmake_clean.cmake
.PHONY : CMakeFiles/spectre.dir/clean

CMakeFiles/spectre.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\spectre C:\Users\Gabriele\CLionProjects\Allenamento\spectre C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\spectre\cmake-build-debug\CMakeFiles\spectre.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spectre.dir/depend

