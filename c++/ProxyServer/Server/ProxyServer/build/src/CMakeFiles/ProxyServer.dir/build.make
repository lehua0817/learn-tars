# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/ProxyServer.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ProxyServer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ProxyServer.dir/flags.make

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o: src/CMakeFiles/ProxyServer.dir/flags.make
src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o: ../src/ProxyImp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o -c /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyImp.cpp

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProxyServer.dir/ProxyImp.cpp.i"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyImp.cpp > CMakeFiles/ProxyServer.dir/ProxyImp.cpp.i

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProxyServer.dir/ProxyImp.cpp.s"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyImp.cpp -o CMakeFiles/ProxyServer.dir/ProxyImp.cpp.s

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.requires:

.PHONY : src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.requires

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.provides: src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/ProxyServer.dir/build.make src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.provides.build
.PHONY : src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.provides

src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.provides.build: src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o


src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o: src/CMakeFiles/ProxyServer.dir/flags.make
src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o: ../src/ProxyServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o -c /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyServer.cpp

src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProxyServer.dir/ProxyServer.cpp.i"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyServer.cpp > CMakeFiles/ProxyServer.dir/ProxyServer.cpp.i

src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProxyServer.dir/ProxyServer.cpp.s"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src/ProxyServer.cpp -o CMakeFiles/ProxyServer.dir/ProxyServer.cpp.s

src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.requires:

.PHONY : src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.requires

src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.provides: src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/ProxyServer.dir/build.make src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.provides.build
.PHONY : src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.provides

src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.provides.build: src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o


# Object files for target ProxyServer
ProxyServer_OBJECTS = \
"CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o" \
"CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o"

# External object files for target ProxyServer
ProxyServer_EXTERNAL_OBJECTS =

bin/ProxyServer: src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o
bin/ProxyServer: src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o
bin/ProxyServer: src/CMakeFiles/ProxyServer.dir/build.make
bin/ProxyServer: /usr/local/tars/cpp/lib/libtarsservant.a
bin/ProxyServer: /usr/local/tars/cpp/lib/libtarsutil.a
bin/ProxyServer: src/CMakeFiles/ProxyServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/ProxyServer"
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProxyServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ProxyServer.dir/build: bin/ProxyServer

.PHONY : src/CMakeFiles/ProxyServer.dir/build

src/CMakeFiles/ProxyServer.dir/requires: src/CMakeFiles/ProxyServer.dir/ProxyImp.cpp.o.requires
src/CMakeFiles/ProxyServer.dir/requires: src/CMakeFiles/ProxyServer.dir/ProxyServer.cpp.o.requires

.PHONY : src/CMakeFiles/ProxyServer.dir/requires

src/CMakeFiles/ProxyServer.dir/clean:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ProxyServer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ProxyServer.dir/clean

src/CMakeFiles/ProxyServer.dir/depend:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src/CMakeFiles/ProxyServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ProxyServer.dir/depend
