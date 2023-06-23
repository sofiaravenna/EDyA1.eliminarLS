cmake_minimum_required(VERSION 3.21)
project(EDyA1_eliminarLS C)

set(CMAKE_C_STANDARD 11)
set(Header lista.h)
add_executable(EDyA1_eliminarLS ${PROJECT_SOURCE_DIR}/ main.c lista.c)
