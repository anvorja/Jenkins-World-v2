# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\cmake-3.21.1-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = C:\cmake-3.21.1-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2\build

# Utility rule file for ContinuousConfigure.

# Include any custom commands dependencies for this target.
include CMakeFiles/ContinuousConfigure.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ContinuousConfigure.dir/progress.make

CMakeFiles/ContinuousConfigure:
	C:\cmake-3.21.1-windows-x86_64\bin\ctest.exe -D ContinuousConfigure

ContinuousConfigure: CMakeFiles/ContinuousConfigure
ContinuousConfigure: CMakeFiles/ContinuousConfigure.dir/build.make
.PHONY : ContinuousConfigure

# Rule to build all files generated by this target.
CMakeFiles/ContinuousConfigure.dir/build: ContinuousConfigure
.PHONY : CMakeFiles/ContinuousConfigure.dir/build

CMakeFiles/ContinuousConfigure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ContinuousConfigure.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousConfigure.dir/clean

CMakeFiles/ContinuousConfigure.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2 C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2 C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2\build C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2\build C:\Users\andre\OneDrive\Escritorio\Jenkins-World-v2\build\CMakeFiles\ContinuousConfigure.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContinuousConfigure.dir/depend
