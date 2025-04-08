# Coffee Shop Simulation (C++)

## Business Description

This project simulates the operation of a coffee shop with multiple cash registers, modeling real-world customer flow, order processing, queue management, and service workflows. It also serves as an educational tool to demonstrate key object-oriented programming (OOP) principles in C++.

## Business Logic

The simulated coffee shop features:

* **N cash registers** to handle customer orders.
* **Three product categories** : Coffee, Tea, and Food.
* **Queue management** : Customers join the shortest queue or are served at available registers.
* **Order processing** : Sequential (base implementation) and asynchronous (extended version with multithreading).

---

## Functional Requirements

### 1. Product Modeling

* **Base class** : `Product` (inherited by `Beverage`, `Tea`, `Food`).
* **Attributes** :
* Cost
* Preparation time
* Name

### 2. Customer Simulation

* **Class** : `Customer`
* **Behavior** :
* Randomly generates an order (quantity/product types).
* Holds a "shopping cart" of products.

### 3. Cash Register System

* **Class** : `CashRegister`
* **Features** :
* Processes customer orders sequentially.
* Manages a queue of waiting customers.

### 4. Coffee Shop Workflow

* **Class** : `Cafe`
* **Logic** :
* Holds multiple `CashRegister` instances.
* Implements queue balancing (customers select the shortest queue).

### 5. Asynchronous Processing (Extended Version)

* **Multithreading** : Uses `std::thread` for parallel order handling.
* **Synchronization** : Ensures thread safety with `std::mutex` and `std::condition_variable`.
* **Multiprocessing:** Using multiprocessing to simplyfy data serialization

### 6. Additional Features

* **Logging** : Tracks order history.
* **Performance metrics** : Measures customer service time.
* **Dynamic queueing** : Handles overflow/waiting lines.
