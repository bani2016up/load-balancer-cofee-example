#include "products/product.h"
#include <cctype>
#include <format>
#include <iostream>

uint64_t Product::lastId = 0;

Product::Product(const std::string& name, uint64_t price, uint64_t processTime, uint64_t id) : id(id), price(price), processTime(processTime), name(name), status(ProductProcessStatus::PENDING)
{
    ++lastId;
}

std::string Product::stat2s(ProductProcessStatus stat)
{
    switch (stat)
    {
        case ProductProcessStatus::PENDING:
            return "PENDING";
        case ProductProcessStatus::PROCESSING:
            return "PROCESSING";
        case ProductProcessStatus::FINISHED:
            return "FINISHED";
        default:
            return "NO STATUS";
    }
}

std::string Product::getInfo() const
{
    return std::format("status: {}\nname: {}\nprice: {}\ttime to cook: {}", stat2s(status), name, price, processTime);
}

void Product::printInfo() const
{
    std::cout << getInfo() << '\n' << '\n';
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


Beverage::Beverage(const std::string& name, uint64_t price, uint64_t processTime, uint64_t id, uint64_t volume) : Product(name, price, processTime, id), volume(volume) {}

std::string Beverage::getInfo() const
{
    return Product::getInfo() + std::format("\tvolume: {}", volume);

}

Food::Food(const std::string& name, uint64_t price, uint64_t processTime, uint64_t id, const std::string& type) : Product(name, price, processTime, id), type(type)
{
    for (char& c: this->type)
    {
        c = std::tolower(c);
    }
}

std::string Food::getInfo() const
{
    return Product::getInfo() + std::format("\ttype: {}", type);
}
