cmake_minimum_required(VERSION 3.22)

project(Phoenix)

set(CMAKE_CXX_STANDARD 17)

add_library(
    phoenix
    SHARED
    src/main.cpp
)

find_library(
    log-lib
    log
)

target_link_libraries(
    phoenix
    ${log-lib}
)
