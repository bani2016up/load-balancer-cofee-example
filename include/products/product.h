#include <cstdint>
#include <string>


 enum class ProductProcessStatus {
    PENDING,
    PROCESSING,
    FINISHED
 };


class Product {
    const uint64_t id;
    uint64_t price;
    uint64_t processTime;
    std::string name;
    ProductProcessStatus status;


public:
    Product(std::string name, uint64_t price = 0, uint64_t processTime = 0, uint64_t id = lastId);

    uint64_t getPrice() const;
    uint64_t getProcessTime() const;
    ProductProcessStatus getStatus() const;
    void processProduct();

    static uint64_t lastId;

};







// class Beverage : public Product {};
// class Food : public Product {};
