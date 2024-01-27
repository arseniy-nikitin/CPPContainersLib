cmake_minimum_required(VERSION 3.15)
project(CONTAINERSLIB LANGUAGES CXX)
set(INTERFACE CMAKE_CXX_STANDARD 17)

include(cmake/UpdateSubmodules.cmake)

get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)
if(NOT IS_SUBPROJECT)
  include(CTest)
endif()

add_subdirectory(external)
add_subdirectory(source)
add_subdirectory(test)