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
CMAKE_SOURCE_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\giftcard

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/giftcard.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/giftcard.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/giftcard.dir/flags.make

CMakeFiles/giftcard.dir/main.cpp.obj: CMakeFiles/giftcard.dir/flags.make
CMakeFiles/giftcard.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/giftcard.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\giftcard.dir\main.cpp.obj -c C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\main.cpp

CMakeFiles/giftcard.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/giftcard.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\main.cpp > CMakeFiles\giftcard.dir\main.cpp.i

CMakeFiles/giftcard.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/giftcard.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\main.cpp -o CMakeFiles\giftcard.dir\main.cpp.s

# Object files for target giftcard
giftcard_OBJECTS = \
"CMakeFiles/giftcard.dir/main.cpp.obj"

# External object files for target giftcard
giftcard_EXTERNAL_OBJECTS =

giftcard.exe: CMakeFiles/giftcard.dir/main.cpp.obj
giftcard.exe: CMakeFiles/giftcard.dir/build.make
giftcard.exe: CMakeFiles/giftcard.dir/linklibs.rsp
giftcard.exe: CMakeFiles/giftcard.dir/objects1.rsp
giftcard.exe: CMakeFiles/giftcard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable giftcard.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\giftcard.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/giftcard.dir/build: giftcard.exe

.PHONY : CMakeFiles/giftcard.dir/build

CMakeFiles/giftcard.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\giftcard.dir\cmake_clean.cmake
.PHONY : CMakeFiles/giftcard.dir/clean

CMakeFiles/giftcard.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gabriele\CLionProjects\Allenamento\giftcard C:\Users\Gabriele\CLionProjects\Allenamento\giftcard C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug C:\Users\Gabriele\CLionProjects\Allenamento\giftcard\cmake-build-debug\CMakeFiles\giftcard.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/giftcard.dir/depend

