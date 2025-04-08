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
    uint64_t getPrice() const {};
    uint64_t getProcessTime() const {};
    ProductProcessStatus getStatus() const;
    void processProduct();


};

class Beverage : public Product {};
class Food : public Product {};
