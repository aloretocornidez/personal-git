# Simple cmake project.

cmake_minimum_required(VERSION 3.10)

# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)


set(project-name "main")
project("${project-name}")


## opencv stuff
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )



set(src main.cpp)
add_executable("${project-name}" "${src}")
target_link_libraries("${project-name}" ${OpenCV_LIBS})






