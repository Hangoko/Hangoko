# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Progs Files\Hangoko\build"

# Include any dependencies generated for this target.
include test/CMakeFiles/test_set.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/test_set.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_set.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_set.dir/flags.make

test/CMakeFiles/test_set.dir/codegen:
.PHONY : test/CMakeFiles/test_set.dir/codegen

test/CMakeFiles/test_set.dir/test_main.cpp.obj: test/CMakeFiles/test_set.dir/flags.make
test/CMakeFiles/test_set.dir/test_main.cpp.obj: test/CMakeFiles/test_set.dir/includes_CXX.rsp
test/CMakeFiles/test_set.dir/test_main.cpp.obj: D:/Progs\ Files/Hangoko/3823B1PR2-main/lab1_bitset/template/test/test_main.cpp
test/CMakeFiles/test_set.dir/test_main.cpp.obj: test/CMakeFiles/test_set.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Progs Files\Hangoko\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_set.dir/test_main.cpp.obj"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test_set.dir/test_main.cpp.obj -MF CMakeFiles\test_set.dir\test_main.cpp.obj.d -o CMakeFiles\test_set.dir\test_main.cpp.obj -c "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_main.cpp"

test/CMakeFiles/test_set.dir/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_set.dir/test_main.cpp.i"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_main.cpp" > CMakeFiles\test_set.dir\test_main.cpp.i

test/CMakeFiles/test_set.dir/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_set.dir/test_main.cpp.s"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_main.cpp" -o CMakeFiles\test_set.dir\test_main.cpp.s

test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj: test/CMakeFiles/test_set.dir/flags.make
test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj: test/CMakeFiles/test_set.dir/includes_CXX.rsp
test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj: D:/Progs\ Files/Hangoko/3823B1PR2-main/lab1_bitset/template/test/test_tbitfield.cpp
test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj: test/CMakeFiles/test_set.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Progs Files\Hangoko\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj -MF CMakeFiles\test_set.dir\test_tbitfield.cpp.obj.d -o CMakeFiles\test_set.dir\test_tbitfield.cpp.obj -c "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tbitfield.cpp"

test/CMakeFiles/test_set.dir/test_tbitfield.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_set.dir/test_tbitfield.cpp.i"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tbitfield.cpp" > CMakeFiles\test_set.dir\test_tbitfield.cpp.i

test/CMakeFiles/test_set.dir/test_tbitfield.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_set.dir/test_tbitfield.cpp.s"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tbitfield.cpp" -o CMakeFiles\test_set.dir\test_tbitfield.cpp.s

test/CMakeFiles/test_set.dir/test_tset.cpp.obj: test/CMakeFiles/test_set.dir/flags.make
test/CMakeFiles/test_set.dir/test_tset.cpp.obj: test/CMakeFiles/test_set.dir/includes_CXX.rsp
test/CMakeFiles/test_set.dir/test_tset.cpp.obj: D:/Progs\ Files/Hangoko/3823B1PR2-main/lab1_bitset/template/test/test_tset.cpp
test/CMakeFiles/test_set.dir/test_tset.cpp.obj: test/CMakeFiles/test_set.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Progs Files\Hangoko\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/test_set.dir/test_tset.cpp.obj"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/test_set.dir/test_tset.cpp.obj -MF CMakeFiles\test_set.dir\test_tset.cpp.obj.d -o CMakeFiles\test_set.dir\test_tset.cpp.obj -c "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tset.cpp"

test/CMakeFiles/test_set.dir/test_tset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_set.dir/test_tset.cpp.i"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tset.cpp" > CMakeFiles\test_set.dir\test_tset.cpp.i

test/CMakeFiles/test_set.dir/test_tset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_set.dir/test_tset.cpp.s"
	cd /d "D:\Progs Files\Hangoko\build\test" && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test\test_tset.cpp" -o CMakeFiles\test_set.dir\test_tset.cpp.s

# Object files for target test_set
test_set_OBJECTS = \
"CMakeFiles/test_set.dir/test_main.cpp.obj" \
"CMakeFiles/test_set.dir/test_tbitfield.cpp.obj" \
"CMakeFiles/test_set.dir/test_tset.cpp.obj"

# External object files for target test_set
test_set_EXTERNAL_OBJECTS =

bin/test_set.exe: test/CMakeFiles/test_set.dir/test_main.cpp.obj
bin/test_set.exe: test/CMakeFiles/test_set.dir/test_tbitfield.cpp.obj
bin/test_set.exe: test/CMakeFiles/test_set.dir/test_tset.cpp.obj
bin/test_set.exe: test/CMakeFiles/test_set.dir/build.make
bin/test_set.exe: lib/libgtest.a
bin/test_set.exe: lib/libset.a
bin/test_set.exe: test/CMakeFiles/test_set.dir/linkLibs.rsp
bin/test_set.exe: test/CMakeFiles/test_set.dir/objects1.rsp
bin/test_set.exe: test/CMakeFiles/test_set.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Progs Files\Hangoko\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ..\bin\test_set.exe"
	cd /d "D:\Progs Files\Hangoko\build\test" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_set.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_set.dir/build: bin/test_set.exe
.PHONY : test/CMakeFiles/test_set.dir/build

test/CMakeFiles/test_set.dir/clean:
	cd /d "D:\Progs Files\Hangoko\build\test" && $(CMAKE_COMMAND) -P CMakeFiles\test_set.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/test_set.dir/clean

test/CMakeFiles/test_set.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template" "D:\Progs Files\Hangoko\3823B1PR2-main\lab1_bitset\template\test" "D:\Progs Files\Hangoko\build" "D:\Progs Files\Hangoko\build\test" "D:\Progs Files\Hangoko\build\test\CMakeFiles\test_set.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : test/CMakeFiles/test_set.dir/depend

