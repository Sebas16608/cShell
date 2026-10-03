cmake_minimum_required(VERSION 3.16)

project(cShell C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(cshell
    src/main.c
)
