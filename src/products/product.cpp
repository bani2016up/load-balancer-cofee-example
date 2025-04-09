#include "products/product.h"

uint64_t Product::lastId = 0;

Product::Product(std::string name, uint64_t price, uint64_t processTime, uint64_t id): id(id), price(price), processTime(processTime), name(name), status(ProductProcessStatus::PENDING)
{
    ++lastId;
}

uint64_t Product::getPrice() const
{
    return price;
}

uint64_t Product::getProcessTime() const
{
    return processTime;
}

ProductProcessStatus Product::getStatus() const
{
    return status;
}
