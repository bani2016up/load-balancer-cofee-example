cmake_minimum_required(VERSION 3.10.0)
project(loadBalancer VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)

include(${CMAKE_SOURCE_DIR}/cmake/common.cmake)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
