#include "products/product.h"
#include <iostream>
#include <vector>


int main(int argc, char* argv[])
{
    // Product pr("Pims_drink");
    // Product pr2("pivo", 66, 60);
    // std::cout << pr.getPrice() << ' ' << pr2.getProcessTime() << ' ' << Product::lastId;


    Food f("salad");
    Beverage b("cocktail");

    // std::cout << b.lastId;

    f.printInfo();
    b.printInfo();

    std::vector<Product*> cart = {&f, &b};

    for (Product* p : cart) {
        p->printInfo();
    }
};
