# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TEST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TEST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST.dir/flags.make

CMakeFiles/TEST.dir/test3.c.o: CMakeFiles/TEST.dir/flags.make
CMakeFiles/TEST.dir/test3.c.o: ../test3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TEST.dir/test3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TEST.dir/test3.c.o   -c "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/test3.c"

CMakeFiles/TEST.dir/test3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TEST.dir/test3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/test3.c" > CMakeFiles/TEST.dir/test3.c.i

CMakeFiles/TEST.dir/test3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TEST.dir/test3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/test3.c" -o CMakeFiles/TEST.dir/test3.c.s

# Object files for target TEST
TEST_OBJECTS = \
"CMakeFiles/TEST.dir/test3.c.o"

# External object files for target TEST
TEST_EXTERNAL_OBJECTS =

TEST: CMakeFiles/TEST.dir/test3.c.o
TEST: CMakeFiles/TEST.dir/build.make
TEST: CMakeFiles/TEST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TEST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEST.dir/build: TEST

.PHONY : CMakeFiles/TEST.dir/build

CMakeFiles/TEST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEST.dir/clean

CMakeFiles/TEST.dir/depend:
	cd "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST" "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST" "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug" "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug" "/Users/swzxsyh/Documents/GitHub/Learning/C project/TEST/cmake-build-debug/CMakeFiles/TEST.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TEST.dir/depend
