#include <queue>
#include <vector>
#include <mutex>
#include <condition_variable>
#include "cart/cart.h"
#include "cashBox/cashBox.h"

/*
Boris, I know you are wondering about cv, well it is like GIL in python, more here:
In C++, a `std::condition_variable` is a synchronization primitive used to block one or more threads until a particular condition is met. It is typically used in conjunction with a `std::mutex` to manage access to shared data and to coordinate the execution of threads.

In the context of the `InputQueueManager` class, the `std::condition_variable cv` is likely used to:

1. **Wait for Carts to be Added**: Threads that are responsible for processing carts can wait on the condition variable until there are carts available in the `inputQueue`. This prevents busy-waiting and allows the thread to sleep until it is notified that there is work to do.

2. **Notify Processing Threads**: When a new cart is added to the `inputQueue` using the `addCart` method, the condition variable can be notified (using `cv.notify_one()` or `cv.notify_all()`) to wake up one or more waiting threads so they can start processing the newly added cart.

The `condition_variable` is essential for implementing efficient and responsive multithreaded applications, as it allows threads to wait for specific conditions without consuming CPU resources unnecessarily.
*/

class InputQueueManager {
    std::queue<Cart> inputQueue;
    std::queue<Cart> outputQueue;
    std::vector<CashBoxProcessingUnit> processingUnits;
    std::mutex queueMutex;
    std::condition_variable cv;



public:
    InputQueueManager(size_t numUnits) {};

    void addCart(const Cart& cart) {};

    void balanceLoad() {}; // Boris must implement eventLoop

    Cart getProcessedCart() {};
};
