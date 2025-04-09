#include <iostream>
#include "products/product.h"

int main(int argc, char *argv[])
{
    Product pr("Pims_drink");
    Product pr2("pivo", 66, 60);
    std::cout << pr.getPrice() << ' ' << pr2.getProcessTime() << ' ' << Product::lastId;

};
