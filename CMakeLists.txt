cmake_minimum_required(VERSION 3.15) # Минимальная версия CMake

set(PROJECT_NAME lab1)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)


add_executable("${PROJECT_NAME}" main.cpp)