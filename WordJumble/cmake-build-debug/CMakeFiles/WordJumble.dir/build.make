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
CMAKE_SOURCE_DIR = /home/sedon/CLionProjects/BC++TGP/WordJumble

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/WordJumble.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WordJumble.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WordJumble.dir/flags.make

CMakeFiles/WordJumble.dir/main.cpp.o: CMakeFiles/WordJumble.dir/flags.make
CMakeFiles/WordJumble.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WordJumble.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WordJumble.dir/main.cpp.o -c /home/sedon/CLionProjects/BC++TGP/WordJumble/main.cpp

CMakeFiles/WordJumble.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WordJumble.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sedon/CLionProjects/BC++TGP/WordJumble/main.cpp > CMakeFiles/WordJumble.dir/main.cpp.i

CMakeFiles/WordJumble.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WordJumble.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sedon/CLionProjects/BC++TGP/WordJumble/main.cpp -o CMakeFiles/WordJumble.dir/main.cpp.s

# Object files for target WordJumble
WordJumble_OBJECTS = \
"CMakeFiles/WordJumble.dir/main.cpp.o"

# External object files for target WordJumble
WordJumble_EXTERNAL_OBJECTS =

WordJumble: CMakeFiles/WordJumble.dir/main.cpp.o
WordJumble: CMakeFiles/WordJumble.dir/build.make
WordJumble: CMakeFiles/WordJumble.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable WordJumble"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WordJumble.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WordJumble.dir/build: WordJumble

.PHONY : CMakeFiles/WordJumble.dir/build

CMakeFiles/WordJumble.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WordJumble.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WordJumble.dir/clean

CMakeFiles/WordJumble.dir/depend:
	cd /home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sedon/CLionProjects/BC++TGP/WordJumble /home/sedon/CLionProjects/BC++TGP/WordJumble /home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug /home/sedon/CLionProjects/BC++TGP/WordJumble/cmake-build-debug/CMakeFiles/WordJumble.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WordJumble.dir/depend

