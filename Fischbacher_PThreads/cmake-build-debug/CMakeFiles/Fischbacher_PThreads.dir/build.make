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
CMAKE_COMMAND = /home/fischi/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/fischi/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Fischbacher_PThreads.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fischbacher_PThreads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fischbacher_PThreads.dir/flags.make

CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o: CMakeFiles/Fischbacher_PThreads.dir/flags.make
CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o -c /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/main.cpp

CMakeFiles/Fischbacher_PThreads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fischbacher_PThreads.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/main.cpp > CMakeFiles/Fischbacher_PThreads.dir/main.cpp.i

CMakeFiles/Fischbacher_PThreads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fischbacher_PThreads.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/main.cpp -o CMakeFiles/Fischbacher_PThreads.dir/main.cpp.s

# Object files for target Fischbacher_PThreads
Fischbacher_PThreads_OBJECTS = \
"CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o"

# External object files for target Fischbacher_PThreads
Fischbacher_PThreads_EXTERNAL_OBJECTS =

Fischbacher_PThreads: CMakeFiles/Fischbacher_PThreads.dir/main.cpp.o
Fischbacher_PThreads: CMakeFiles/Fischbacher_PThreads.dir/build.make
Fischbacher_PThreads: CMakeFiles/Fischbacher_PThreads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Fischbacher_PThreads"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fischbacher_PThreads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fischbacher_PThreads.dir/build: Fischbacher_PThreads

.PHONY : CMakeFiles/Fischbacher_PThreads.dir/build

CMakeFiles/Fischbacher_PThreads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fischbacher_PThreads.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fischbacher_PThreads.dir/clean

CMakeFiles/Fischbacher_PThreads.dir/depend:
	cd /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug /home/fischi/Dokumente/Schule/POS/Projects/school/Fischbacher_PThreads/cmake-build-debug/CMakeFiles/Fischbacher_PThreads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fischbacher_PThreads.dir/depend

