# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /cygdrive/c/Users/John/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/John/AppData/Local/JetBrains/CLion2020.1/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Polynomials.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Polynomials.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Polynomials.dir/flags.make

CMakeFiles/Polynomials.dir/polynomials.cpp.o: CMakeFiles/Polynomials.dir/flags.make
CMakeFiles/Polynomials.dir/polynomials.cpp.o: ../polynomials.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Polynomials.dir/polynomials.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polynomials.dir/polynomials.cpp.o -c /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/polynomials.cpp

CMakeFiles/Polynomials.dir/polynomials.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polynomials.dir/polynomials.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/polynomials.cpp > CMakeFiles/Polynomials.dir/polynomials.cpp.i

CMakeFiles/Polynomials.dir/polynomials.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polynomials.dir/polynomials.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/polynomials.cpp -o CMakeFiles/Polynomials.dir/polynomials.cpp.s

# Object files for target Polynomials
Polynomials_OBJECTS = \
"CMakeFiles/Polynomials.dir/polynomials.cpp.o"

# External object files for target Polynomials
Polynomials_EXTERNAL_OBJECTS =

Polynomials.exe: CMakeFiles/Polynomials.dir/polynomials.cpp.o
Polynomials.exe: CMakeFiles/Polynomials.dir/build.make
Polynomials.exe: CMakeFiles/Polynomials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Polynomials.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polynomials.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Polynomials.dir/build: Polynomials.exe

.PHONY : CMakeFiles/Polynomials.dir/build

CMakeFiles/Polynomials.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Polynomials.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Polynomials.dir/clean

CMakeFiles/Polynomials.dir/depend:
	cd /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug /cygdrive/c/Users/John/Desktop/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles/Polynomials.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Polynomials.dir/depend

