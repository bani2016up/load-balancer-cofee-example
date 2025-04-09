enable_testing()

add_executable(coffeeShopTest products/product.cpp)

target_link_libraries(coffeeShopTest gtest_main coffeeShop)