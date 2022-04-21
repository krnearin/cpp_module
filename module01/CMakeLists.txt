cmake_minimum_required(VERSION 3.21)
project(module01)

set(CMAKE_CXX_STANDARD 98)

add_executable(module01 ex03/main.cpp
        ex03/HumanA.cpp
        ex03/HumanB.cpp
        ex03/Weapon.cpp
        )
