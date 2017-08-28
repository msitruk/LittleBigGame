cmake_minimum_required(VERSION 3.5)
project(LittleBigGame)
set(EXECUTABLE_NAME "LittleBigGame")

set(CMAKE_CXX_STANDARD 11)


SET(Objects
        "Objects/AbstractEntity.cpp" "Objects/AbstractEntity.hh"
        "Objects/Character.cpp" "Objects/Character.hh"
        "Objects/TimeManager.cpp" "Objects/TimeManager.hh"
        "Objects/IObserver.hh"
        "Objects/IObservable.hh"
        "Objects/MonsterFactory.cpp" "Objects/MonsterFactory.hh"
        "Objects/ZombieMonster.cpp" "Objects/ZombieMonster.hh"
        "Objects/SprinterMonster.cpp" "Objects/SprinterMonster.hh"
        "Objects/TileMap.cpp" "Objects/TileMap.hh"
        "Objects/Camera.cpp" "Objects/Camera.hh"
        "Objects/Player.cpp" "Objects/Player.hh")


set(SOURCE_FILES main.cpp main.h input.cpp input.h /usr/local/include/tmxparser/Tmx.h ${Objects})
add_executable(LittleBigGame ${SOURCE_FILES})
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/lib" ${CMAKE_MODULE_PATH})

find_package(tmxparser)
if(TMXPARSER_FOUND)
    set(STATUS_TMXPARSER "OK")
else(TMXPARSER_FOUND)
    set(STATUS_TMXPARSER "not found")
endif(TMXPARSER_FOUND)
# Install SFML

find_package(SFML 2 REQUIRED system window graphics network audio)

#set(SFML_ROOT "/home/maxime/GitHub/LittleBigGame/lib/SFML-2.4.2")
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${TMXPARSER_LIBRARY})
endif()


# Install target
install (TARGETS ${EXECUTABLE_NAME} DESTINATION bin)
