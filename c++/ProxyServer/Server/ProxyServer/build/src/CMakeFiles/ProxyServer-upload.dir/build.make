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

# Utility rule file for ProxyServer-upload.

# Include the progress variables for this target.
include src/CMakeFiles/ProxyServer-upload.dir/progress.make

src/CMakeFiles/ProxyServer-upload:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "upload TMF.ProxyServer.tgz and publish..."
	cmake -P /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src/run-upload-ProxyServer.cmake

ProxyServer-upload: src/CMakeFiles/ProxyServer-upload
ProxyServer-upload: src/CMakeFiles/ProxyServer-upload.dir/build.make

.PHONY : ProxyServer-upload

# Rule to build all files generated by this target.
src/CMakeFiles/ProxyServer-upload.dir/build: ProxyServer-upload

.PHONY : src/CMakeFiles/ProxyServer-upload.dir/build

src/CMakeFiles/ProxyServer-upload.dir/clean:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ProxyServer-upload.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ProxyServer-upload.dir/clean

src/CMakeFiles/ProxyServer-upload.dir/depend:
	cd /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src /usr/local/other/learn-tars/ProxyServer/Server/ProxyServer/build/src/CMakeFiles/ProxyServer-upload.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ProxyServer-upload.dir/depend

