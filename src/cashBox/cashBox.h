#include "cart/cart.h"
#include <queue>


class CashBoxProcessingUnit {
    const uint64_t id;
    CashBoxProcessingUnit(const uint64_t id);

public:
    void processCart(Cart& cart) {};
};


class CashBoxLocalQueue {
    const std::queue<Cart>& cartQueue;
    uint64_t currentItemProcessingIndex;
    CashBoxLocalQueue(const std::queue<Cart>& finalCart);
public:
    void processNext(CashBoxProcessingUnit& processingUnit) {};
};
