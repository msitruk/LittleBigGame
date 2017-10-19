cmake_minimum_required(VERSION 3.5)
project(LittleBigGame)
set(EXECUTABLE_NAME "LittleBigGame")

set(CMAKE_CXX_STANDARD 11)


SET(Models
        "Models/AbstractEntity.cpp" "Models/AbstractEntity.hh"
        "Models/Character.cpp" "Models/Character.hh"
        "Models/TimeManager.cpp" "Models/TimeManager.hh"
        "Models/IObserver.hh"
        "Models/IObservable.hh"
        "Models/MonsterFactory.cpp" "Models/MonsterFactory.hh"
        "Models/ZombieMonster.cpp" "Models/ZombieMonster.hh"
        "Models/SprinterMonster.cpp" "Models/SprinterMonster.hh"
        "Models/TileMap.cpp" "Models/TileMap.hh"
        "Models/Camera.cpp" "Models/Camera.hh"
        "Models/PlayerSprite.cpp" "Models/PlayerSprite.hh" Models/PlayerAnimation.cpp Models/PlayerAnimation.hh)

SET(Conntrollers Controller/GameEngine.cpp Controller/GameEngine.hh)


set(SOURCE_FILES main.cpp main.h /usr/local/include/tmxparser/Tmx.h ${Models} ${Conntrollers})
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
