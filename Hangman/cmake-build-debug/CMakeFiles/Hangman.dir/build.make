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
CMAKE_COMMAND = /home/sedon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/sedon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.6668.126/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sedon/CLionProjects/BC++TGP/Hangman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Hangman.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hangman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hangman.dir/flags.make

CMakeFiles/Hangman.dir/main.cpp.o: CMakeFiles/Hangman.dir/flags.make
CMakeFiles/Hangman.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hangman.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hangman.dir/main.cpp.o -c /home/sedon/CLionProjects/BC++TGP/Hangman/main.cpp

CMakeFiles/Hangman.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hangman.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sedon/CLionProjects/BC++TGP/Hangman/main.cpp > CMakeFiles/Hangman.dir/main.cpp.i

CMakeFiles/Hangman.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hangman.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sedon/CLionProjects/BC++TGP/Hangman/main.cpp -o CMakeFiles/Hangman.dir/main.cpp.s

# Object files for target Hangman
Hangman_OBJECTS = \
"CMakeFiles/Hangman.dir/main.cpp.o"

# External object files for target Hangman
Hangman_EXTERNAL_OBJECTS =

Hangman: CMakeFiles/Hangman.dir/main.cpp.o
Hangman: CMakeFiles/Hangman.dir/build.make
Hangman: CMakeFiles/Hangman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Hangman"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hangman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hangman.dir/build: Hangman

.PHONY : CMakeFiles/Hangman.dir/build

CMakeFiles/Hangman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hangman.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hangman.dir/clean

CMakeFiles/Hangman.dir/depend:
	cd /home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sedon/CLionProjects/BC++TGP/Hangman /home/sedon/CLionProjects/BC++TGP/Hangman /home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/Hangman/cmake-build-debug/CMakeFiles/Hangman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Hangman.dir/depend

