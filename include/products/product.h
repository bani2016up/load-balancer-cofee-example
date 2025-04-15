#include <cstdint>
#include <string>


enum class ProductProcessStatus
{
    PENDING,
    PROCESSING,
    FINISHED
};


class Product
{
private:
    const uint64_t id;
    uint64_t price;
    uint64_t processTime;
    std::string name;
    ProductProcessStatus status;


public:
    Product(const std::string& name, uint64_t price = 0, uint64_t processTime = 0, uint64_t id = lastId);

    uint64_t getPrice() const;
    uint64_t getProcessTime() const;
    ProductProcessStatus getStatus() const;
    void processProduct();
    virtual std::string getInfo() const;
    void printInfo() const;

    static std::string stat2s(ProductProcessStatus stat);


    static uint64_t lastId;
};






class Beverage : public Product
{

    int volume;


public:
    Beverage(const std::string& name, uint64_t price = 90, uint64_t processTime = 60, uint64_t id = lastId, uint64_t volume = 250);

    std::string getInfo() const;

};



class Food : public Product
{

    std::string type;

public:
    Food(const std::string& name, uint64_t price = 120, uint64_t processTime = 20, uint64_t id = lastId, const std::string& type = "BLUDO");

    std::string getInfo() const;

};



