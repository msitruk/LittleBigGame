# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/maxime/clion-2017.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/maxime/clion-2017.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maxime/GitHub/LittleBigGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maxime/GitHub/LittleBigGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LittleBigGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LittleBigGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LittleBigGame.dir/flags.make

CMakeFiles/LittleBigGame.dir/main.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LittleBigGame.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/main.cpp.o -c /home/maxime/GitHub/LittleBigGame/main.cpp

CMakeFiles/LittleBigGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/main.cpp > CMakeFiles/LittleBigGame.dir/main.cpp.i

CMakeFiles/LittleBigGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/main.cpp -o CMakeFiles/LittleBigGame.dir/main.cpp.s

CMakeFiles/LittleBigGame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/main.cpp.o.requires

CMakeFiles/LittleBigGame.dir/main.cpp.o.provides: CMakeFiles/LittleBigGame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/main.cpp.o.provides

CMakeFiles/LittleBigGame.dir/main.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/main.cpp.o


CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o: ../Models/AbstractEntity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/AbstractEntity.cpp

CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/AbstractEntity.cpp > CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.i

CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/AbstractEntity.cpp -o CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.s

CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o: ../Models/NotUseAtThisPoint/Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Character.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Character.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Character.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o: ../Models/NotUseAtThisPoint/TimeManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/TimeManager.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/TimeManager.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/TimeManager.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o: ../Models/NotUseAtThisPoint/MonsterFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/MonsterFactory.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/MonsterFactory.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/MonsterFactory.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o: ../Models/NotUseAtThisPoint/ZombieMonster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/ZombieMonster.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/ZombieMonster.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/ZombieMonster.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o: ../Models/NotUseAtThisPoint/SprinterMonster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/SprinterMonster.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/SprinterMonster.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/SprinterMonster.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o


CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o: ../Models/TileMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/TileMap.cpp

CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/TileMap.cpp > CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.i

CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/TileMap.cpp -o CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.s

CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o


CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o: ../Models/NotUseAtThisPoint/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Camera.cpp

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Camera.cpp > CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.i

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/NotUseAtThisPoint/Camera.cpp -o CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.s

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o


CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o: ../Models/PlayerSprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/PlayerSprite.cpp

CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/PlayerSprite.cpp > CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.i

CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/PlayerSprite.cpp -o CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.s

CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o


CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o: ../Models/PlayerAnimation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o -c /home/maxime/GitHub/LittleBigGame/Models/PlayerAnimation.cpp

CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Models/PlayerAnimation.cpp > CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.i

CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Models/PlayerAnimation.cpp -o CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.s

CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o


CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o: CMakeFiles/LittleBigGame.dir/flags.make
CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o: ../Controller/GameEngine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o -c /home/maxime/GitHub/LittleBigGame/Controller/GameEngine.cpp

CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxime/GitHub/LittleBigGame/Controller/GameEngine.cpp > CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.i

CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxime/GitHub/LittleBigGame/Controller/GameEngine.cpp -o CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.s

CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.requires:

.PHONY : CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.requires

CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.provides: CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.requires
	$(MAKE) -f CMakeFiles/LittleBigGame.dir/build.make CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.provides.build
.PHONY : CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.provides

CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.provides.build: CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o


# Object files for target LittleBigGame
LittleBigGame_OBJECTS = \
"CMakeFiles/LittleBigGame.dir/main.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o" \
"CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o"

# External object files for target LittleBigGame
LittleBigGame_EXTERNAL_OBJECTS =

LittleBigGame: CMakeFiles/LittleBigGame.dir/main.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o
LittleBigGame: CMakeFiles/LittleBigGame.dir/build.make
LittleBigGame: /usr/local/lib/libsfml-system.so
LittleBigGame: /usr/local/lib/libsfml-window.so
LittleBigGame: /usr/local/lib/libsfml-graphics.so
LittleBigGame: /usr/local/lib/libsfml-network.so
LittleBigGame: /usr/local/lib/libsfml-audio.so
LittleBigGame: /usr/local/lib/libtmxparser.so
LittleBigGame: CMakeFiles/LittleBigGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable LittleBigGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LittleBigGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LittleBigGame.dir/build: LittleBigGame

.PHONY : CMakeFiles/LittleBigGame.dir/build

CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/main.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/AbstractEntity.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Character.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/TimeManager.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/MonsterFactory.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/ZombieMonster.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/SprinterMonster.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/TileMap.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/NotUseAtThisPoint/Camera.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/PlayerSprite.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Models/PlayerAnimation.cpp.o.requires
CMakeFiles/LittleBigGame.dir/requires: CMakeFiles/LittleBigGame.dir/Controller/GameEngine.cpp.o.requires

.PHONY : CMakeFiles/LittleBigGame.dir/requires

CMakeFiles/LittleBigGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LittleBigGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LittleBigGame.dir/clean

CMakeFiles/LittleBigGame.dir/depend:
	cd /home/maxime/GitHub/LittleBigGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maxime/GitHub/LittleBigGame /home/maxime/GitHub/LittleBigGame /home/maxime/GitHub/LittleBigGame/cmake-build-debug /home/maxime/GitHub/LittleBigGame/cmake-build-debug /home/maxime/GitHub/LittleBigGame/cmake-build-debug/CMakeFiles/LittleBigGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LittleBigGame.dir/depend

