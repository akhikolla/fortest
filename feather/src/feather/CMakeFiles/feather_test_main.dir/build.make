# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.3.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.3.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hadley/Documents/ingest/feather/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hadley/Documents/ingest/feather/cpp

# Include any dependencies generated for this target.
include src/feather/CMakeFiles/feather_test_main.dir/depend.make

# Include the progress variables for this target.
include src/feather/CMakeFiles/feather_test_main.dir/progress.make

# Include the compile flags for this target's objects.
include src/feather/CMakeFiles/feather_test_main.dir/flags.make

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o: src/feather/CMakeFiles/feather_test_main.dir/flags.make
src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o: src/feather/test_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hadley/Documents/ingest/feather/cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o"
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/feather_test_main.dir/test_main.cc.o -c /Users/hadley/Documents/ingest/feather/cpp/src/feather/test_main.cc

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/feather_test_main.dir/test_main.cc.i"
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/hadley/Documents/ingest/feather/cpp/src/feather/test_main.cc > CMakeFiles/feather_test_main.dir/test_main.cc.i

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/feather_test_main.dir/test_main.cc.s"
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/hadley/Documents/ingest/feather/cpp/src/feather/test_main.cc -o CMakeFiles/feather_test_main.dir/test_main.cc.s

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.requires:

.PHONY : src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.requires

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.provides: src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.requires
	$(MAKE) -f src/feather/CMakeFiles/feather_test_main.dir/build.make src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.provides.build
.PHONY : src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.provides

src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.provides.build: src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o


# Object files for target feather_test_main
feather_test_main_OBJECTS = \
"CMakeFiles/feather_test_main.dir/test_main.cc.o"

# External object files for target feather_test_main
feather_test_main_EXTERNAL_OBJECTS =

build/debug/libfeather_test_main.a: src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o
build/debug/libfeather_test_main.a: src/feather/CMakeFiles/feather_test_main.dir/build.make
build/debug/libfeather_test_main.a: src/feather/CMakeFiles/feather_test_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hadley/Documents/ingest/feather/cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../build/debug/libfeather_test_main.a"
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && $(CMAKE_COMMAND) -P CMakeFiles/feather_test_main.dir/cmake_clean_target.cmake
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/feather_test_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/feather/CMakeFiles/feather_test_main.dir/build: build/debug/libfeather_test_main.a

.PHONY : src/feather/CMakeFiles/feather_test_main.dir/build

src/feather/CMakeFiles/feather_test_main.dir/requires: src/feather/CMakeFiles/feather_test_main.dir/test_main.cc.o.requires

.PHONY : src/feather/CMakeFiles/feather_test_main.dir/requires

src/feather/CMakeFiles/feather_test_main.dir/clean:
	cd /Users/hadley/Documents/ingest/feather/cpp/src/feather && $(CMAKE_COMMAND) -P CMakeFiles/feather_test_main.dir/cmake_clean.cmake
.PHONY : src/feather/CMakeFiles/feather_test_main.dir/clean

src/feather/CMakeFiles/feather_test_main.dir/depend:
	cd /Users/hadley/Documents/ingest/feather/cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hadley/Documents/ingest/feather/cpp /Users/hadley/Documents/ingest/feather/cpp/src/feather /Users/hadley/Documents/ingest/feather/cpp /Users/hadley/Documents/ingest/feather/cpp/src/feather /Users/hadley/Documents/ingest/feather/cpp/src/feather/CMakeFiles/feather_test_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/feather/CMakeFiles/feather_test_main.dir/depend

