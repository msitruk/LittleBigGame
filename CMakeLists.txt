cmake_minimum_required(VERSION 3.5)
project(LittleBigGame)
set(EXECUTABLE_NAME "LittleBigGame")

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp main.h input.cpp input.h)
add_executable(LittleBigGame ${SOURCE_FILES})

# Install SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/lib" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)

#set(SFML_ROOT "/home/maxime/GitHub/LittleBigGame/lib/SFML-2.4.2")
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()

# Install target
install (TARGETS ${EXECUTABLE_NAME} DESTINATION bin)
