cmake_minimum_required(VERSION 3.10)

project(ci_example)

set(SOURCES 
			src/main.cpp
) 

set(HEADERS src/lib.hpp)
			
add_executable(ci_example ${SOURCES} ${HEADERS})

set_property(TARGET ci_example PROPERTY CXX_STANDARD 17)
set_property(TARGET ci_example PROPERTY CXX_STANDARD_REQUIRED ON)

enable_testing()
add_subdirectory (test)
