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
include CMakeFiles/TESTSTOCK.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TESTSTOCK.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TESTSTOCK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TESTSTOCK.dir/flags.make

CMakeFiles/TESTSTOCK.dir/main.cpp.obj: CMakeFiles/TESTSTOCK.dir/flags.make
CMakeFiles/TESTSTOCK.dir/main.cpp.obj: CMakeFiles/TESTSTOCK.dir/includes_CXX.rsp
CMakeFiles/TESTSTOCK.dir/main.cpp.obj: ../main.cpp
CMakeFiles/TESTSTOCK.dir/main.cpp.obj: CMakeFiles/TESTSTOCK.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TESTSTOCK.dir/main.cpp.obj"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TESTSTOCK.dir/main.cpp.obj -MF CMakeFiles\TESTSTOCK.dir\main.cpp.obj.d -o CMakeFiles\TESTSTOCK.dir\main.cpp.obj -c F:\GitHub\LeetCode\main.cpp

CMakeFiles/TESTSTOCK.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TESTSTOCK.dir/main.cpp.i"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\LeetCode\main.cpp > CMakeFiles\TESTSTOCK.dir\main.cpp.i

CMakeFiles/TESTSTOCK.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TESTSTOCK.dir/main.cpp.s"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\LeetCode\main.cpp -o CMakeFiles\TESTSTOCK.dir\main.cpp.s

CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj: CMakeFiles/TESTSTOCK.dir/flags.make
CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj: CMakeFiles/TESTSTOCK.dir/includes_CXX.rsp
CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj: ../src/Solution.cpp
CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj: CMakeFiles/TESTSTOCK.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj -MF CMakeFiles\TESTSTOCK.dir\src\Solution.cpp.obj.d -o CMakeFiles\TESTSTOCK.dir\src\Solution.cpp.obj -c F:\GitHub\LeetCode\src\Solution.cpp

CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.i"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\LeetCode\src\Solution.cpp > CMakeFiles\TESTSTOCK.dir\src\Solution.cpp.i

CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.s"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\LeetCode\src\Solution.cpp -o CMakeFiles\TESTSTOCK.dir\src\Solution.cpp.s

CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj: CMakeFiles/TESTSTOCK.dir/flags.make
CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj: CMakeFiles/TESTSTOCK.dir/includes_CXX.rsp
CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj: ../src/STOCK.cpp
CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj: CMakeFiles/TESTSTOCK.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj -MF CMakeFiles\TESTSTOCK.dir\src\STOCK.cpp.obj.d -o CMakeFiles\TESTSTOCK.dir\src\STOCK.cpp.obj -c F:\GitHub\LeetCode\src\STOCK.cpp

CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.i"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\LeetCode\src\STOCK.cpp > CMakeFiles\TESTSTOCK.dir\src\STOCK.cpp.i

CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.s"
	E:\PROGRA~1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\LeetCode\src\STOCK.cpp -o CMakeFiles\TESTSTOCK.dir\src\STOCK.cpp.s

# Object files for target TESTSTOCK
TESTSTOCK_OBJECTS = \
"CMakeFiles/TESTSTOCK.dir/main.cpp.obj" \
"CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj" \
"CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj"

# External object files for target TESTSTOCK
TESTSTOCK_EXTERNAL_OBJECTS =

TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/main.cpp.obj
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/src/Solution.cpp.obj
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/src/STOCK.cpp.obj
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/build.make
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/linklibs.rsp
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/objects1.rsp
TESTSTOCK.exe: CMakeFiles/TESTSTOCK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GitHub\LeetCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable TESTSTOCK.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TESTSTOCK.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TESTSTOCK.dir/build: TESTSTOCK.exe
.PHONY : CMakeFiles/TESTSTOCK.dir/build

CMakeFiles/TESTSTOCK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TESTSTOCK.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TESTSTOCK.dir/clean

CMakeFiles/TESTSTOCK.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GitHub\LeetCode F:\GitHub\LeetCode F:\GitHub\LeetCode\build F:\GitHub\LeetCode\build F:\GitHub\LeetCode\build\CMakeFiles\TESTSTOCK.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TESTSTOCK.dir/depend

