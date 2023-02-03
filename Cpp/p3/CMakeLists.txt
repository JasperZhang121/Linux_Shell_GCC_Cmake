cmake_minimum_required(VERSION 3.0)

project(SoldierF)

include_directories(include)

add_executable(my_cmake_exe main.cpp src/Gun.cpp src/Soldier.cpp)

