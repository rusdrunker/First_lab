cmake_minimum_required(VERSION 3.17)
project(FirstLab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(FirstLab
        Charmander.cpp
        Charmander.h
        main.cpp
        Pikachu.cpp
        Pikachu.h
        Pokemon.cpp
        Pokemon.h
        Slowpoke.cpp
        Slowpoke.h)
