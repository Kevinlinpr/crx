cmake_minimum_required(VERSION 3.10)

project(Kevinlinpr)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(Kevinlinpr SHARED 
    ${PROJECT_SOURCE_DIR}/src/crx.cc
    ${PROJECT_SOURCE_DIR}/src/crx.h
)

include_directories(${PROJECT_SOURCE_DIR}/utils/crx/api)
target_link_libraries(Kevinlinpr ${PROJECT_SOURCE_DIR}/utils/crx/api/crx.so)

#指定产物目录~
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
