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
CMAKE_SOURCE_DIR = /home/sedon/CLionProjects/BC++TGP/GuessMyNumber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GuessMyNumber.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GuessMyNumber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GuessMyNumber.dir/flags.make

CMakeFiles/GuessMyNumber.dir/main.cpp.o: CMakeFiles/GuessMyNumber.dir/flags.make
CMakeFiles/GuessMyNumber.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GuessMyNumber.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GuessMyNumber.dir/main.cpp.o -c /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/main.cpp

CMakeFiles/GuessMyNumber.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GuessMyNumber.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/main.cpp > CMakeFiles/GuessMyNumber.dir/main.cpp.i

CMakeFiles/GuessMyNumber.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GuessMyNumber.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/main.cpp -o CMakeFiles/GuessMyNumber.dir/main.cpp.s

# Object files for target GuessMyNumber
GuessMyNumber_OBJECTS = \
"CMakeFiles/GuessMyNumber.dir/main.cpp.o"

# External object files for target GuessMyNumber
GuessMyNumber_EXTERNAL_OBJECTS =

GuessMyNumber: CMakeFiles/GuessMyNumber.dir/main.cpp.o
GuessMyNumber: CMakeFiles/GuessMyNumber.dir/build.make
GuessMyNumber: CMakeFiles/GuessMyNumber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GuessMyNumber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GuessMyNumber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GuessMyNumber.dir/build: GuessMyNumber

.PHONY : CMakeFiles/GuessMyNumber.dir/build

CMakeFiles/GuessMyNumber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GuessMyNumber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GuessMyNumber.dir/clean

CMakeFiles/GuessMyNumber.dir/depend:
	cd /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sedon/CLionProjects/BC++TGP/GuessMyNumber /home/sedon/CLionProjects/BC++TGP/GuessMyNumber /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/GuessMyNumber/cmake-build-debug/CMakeFiles/GuessMyNumber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GuessMyNumber.dir/depend

