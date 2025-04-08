#include <vector>
#include "products/product.h"
#include <stack>

class Cart {
    const uint64_t id;
    std::stack<Product*> products;

public:

    void addProduct(const Product& product) {};
    Product* nextProduct() {};


};
