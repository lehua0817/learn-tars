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

# Utility rule file for ProxyServer-tar.

# Include the progress variables for this target.
include src/CMakeFiles/ProxyServer-tar.dir/progress.make

src/CMakeFiles/ProxyServer-tar: src/ProxyServer.tgz
src/CMakeFiles/ProxyServer-tar: bin/ProxyServer


src/ProxyServer.tgz:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "call /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/run-tar-ProxyServer.cmake"
	/usr/bin/cmake-3.9.0-Linux-x86_64/bin/cmake -P /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/run-tar-ProxyServer.cmake

ProxyServer-tar: src/CMakeFiles/ProxyServer-tar
ProxyServer-tar: src/ProxyServer.tgz
ProxyServer-tar: src/CMakeFiles/ProxyServer-tar.dir/build.make

.PHONY : ProxyServer-tar

# Rule to build all files generated by this target.
src/CMakeFiles/ProxyServer-tar.dir/build: ProxyServer-tar

.PHONY : src/CMakeFiles/ProxyServer-tar.dir/build

src/CMakeFiles/ProxyServer-tar.dir/clean:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ProxyServer-tar.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ProxyServer-tar.dir/clean

src/CMakeFiles/ProxyServer-tar.dir/depend:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src/CMakeFiles/ProxyServer-tar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ProxyServer-tar.dir/depend

