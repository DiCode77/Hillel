cmake_minimum_required(VERSION 3.31.5)

project(MyApp)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_MODULES ${CMAKE_SOURCE_DIR}/cmake/modules)

include(${CMAKE_MODULES}/warnings.cmake)

add_compile_options(${OPT_WARNINGS})
add_subdirectory(${SRC_DIR})
