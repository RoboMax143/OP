cmake_minimum_required(VERSION 3.15) # Минимальная версия CMake

set(PROJECT_NAME lab6)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 20)


add_executable("${PROJECT_NAME}" main.cpp inout.cpp inout.hpp reform.cpp reform.hpp)