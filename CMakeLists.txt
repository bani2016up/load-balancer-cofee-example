cmake_minimum_required(VERSION 3.10.0)
project(loadBalancer VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)


include_directories(
    ${CMAKE_SOURCE_DIR}/src/cart
    ${CMAKE_SOURCE_DIR}/src/cashBox
    ${CMAKE_SOURCE_DIR}/src/inputManager
)


set(SOURCES
    src/main.cpp
    src/cart/cart.cpp
    src/cashBox/cashBox.cpp
    src/inputManager/inputManager.cpp
)

add_executable(loadBalancer main.cpp)
