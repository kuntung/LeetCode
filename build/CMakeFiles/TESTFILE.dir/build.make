# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = E:\cmake\bin\cmake.exe

# The command to remove a file.
RM = E:\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\GitHub\LeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GitHub\LeetCode\build

# Include any dependencies generated for this target.
include CMakeFiles/TESTFILE.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TESTFILE.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TESTFILE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TESTFILE.dir/flags.make

CMakeFiles/TESTFILE.dir/main.cpp.obj: CMakeFiles/TESTFILE.dir/flags.make
CMakeFiles/TESTFILE.dir/main.cpp.obj: CMakeFiles/TESTFILE.dir/includes_CXX.rsp
CMakeFiles/TESTFILE.dir/main.cpp.obj: ../main.cpp
CMakeFiles/TESTFILE.dir/main.cpp.obj: CMakeFiles/TESTFILE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TESTFILE.dir/main.cpp.obj"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TESTFILE.dir/main.cpp.obj -MF CMakeFiles\TESTFILE.dir\main.cpp.obj.d -o CMakeFiles\TESTFILE.dir\main.cpp.obj -c F:\GitHub\LeetCode\main.cpp

CMakeFiles/TESTFILE.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TESTFILE.dir/main.cpp.i"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\LeetCode\main.cpp > CMakeFiles\TESTFILE.dir\main.cpp.i

CMakeFiles/TESTFILE.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TESTFILE.dir/main.cpp.s"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\LeetCode\main.cpp -o CMakeFiles\TESTFILE.dir\main.cpp.s

CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj: CMakeFiles/TESTFILE.dir/flags.make
CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj: CMakeFiles/TESTFILE.dir/includes_CXX.rsp
CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj: ../src/Solution.cpp
CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj: CMakeFiles/TESTFILE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj -MF CMakeFiles\TESTFILE.dir\src\Solution.cpp.obj.d -o CMakeFiles\TESTFILE.dir\src\Solution.cpp.obj -c F:\GitHub\LeetCode\src\Solution.cpp

CMakeFiles/TESTFILE.dir/src/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TESTFILE.dir/src/Solution.cpp.i"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\LeetCode\src\Solution.cpp > CMakeFiles\TESTFILE.dir\src\Solution.cpp.i

CMakeFiles/TESTFILE.dir/src/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TESTFILE.dir/src/Solution.cpp.s"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\LeetCode\src\Solution.cpp -o CMakeFiles\TESTFILE.dir\src\Solution.cpp.s

# Object files for target TESTFILE
TESTFILE_OBJECTS = \
"CMakeFiles/TESTFILE.dir/main.cpp.obj" \
"CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj"

# External object files for target TESTFILE
TESTFILE_EXTERNAL_OBJECTS =

TESTFILE.exe: CMakeFiles/TESTFILE.dir/main.cpp.obj
TESTFILE.exe: CMakeFiles/TESTFILE.dir/src/Solution.cpp.obj
TESTFILE.exe: CMakeFiles/TESTFILE.dir/build.make
TESTFILE.exe: CMakeFiles/TESTFILE.dir/linklibs.rsp
TESTFILE.exe: CMakeFiles/TESTFILE.dir/objects1.rsp
TESTFILE.exe: CMakeFiles/TESTFILE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TESTFILE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TESTFILE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TESTFILE.dir/build: TESTFILE.exe
.PHONY : CMakeFiles/TESTFILE.dir/build

CMakeFiles/TESTFILE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TESTFILE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TESTFILE.dir/clean

CMakeFiles/TESTFILE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GitHub\LeetCode F:\GitHub\LeetCode F:\GitHub\LeetCode\build F:\GitHub\LeetCode\build F:\GitHub\LeetCode\build\CMakeFiles\TESTFILE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TESTFILE.dir/depend

