
file(GLOB PRODUCT_SOURCES products/*.cpp)
# todo: for all source directories
set(SOURCES ${PRODUCT_SOURCES})

add_library(coffeeShop STATIC ${SOURCES})
target_include_directories(coffeeShop PUBLIC ${CMAKE_SOURCE_DIR}/include)
