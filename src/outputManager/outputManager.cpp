#include <queue>
#include <mutex>
#include "cart/cart.h"


class OutputManager {
    std::queue<Cart> outputQueue;
    std::mutex outputMutex;

public:
    void addProcessedCart(Cart& cart) {}

    bool getProcessedCart(Cart& cart) {}
};
