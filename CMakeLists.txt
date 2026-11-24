cmake_minimum_required(VERSION 3.16)
project(ai-background-music-gen CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aibackgroundmusicgen
    src/main.cpp
    src/compose.cpp
    src/mood.cpp
)

target_include_directories(aibackgroundmusicgen PRIVATE include)

if(WIN32)
    target_link_libraries(aibackgroundmusicgen PRIVATE userenv)
endif()
