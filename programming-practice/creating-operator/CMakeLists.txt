# Simple cmake project.

cmake_minimum_required(VERSION 3.10)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)


set(project-name "main")
project("${project-name}")


## opencv stuff

set(src main.cpp)
add_executable("${project-name}" "${src}")






