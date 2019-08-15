# Require a recent version of cmake
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(moderncpp)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_CXX_FLAGS "-O3 -std=c++14 -pthread")

set(Practise_programs
   lambda_test
    valgrind_memcheck)

foreach(Practise_program ${Practise_programs})
    set(sources ${Practise_program}.cpp)
    source_group("Source Files" FILES{sources})
    add_executable(${Practise_program} ${sources})
endforeach()
