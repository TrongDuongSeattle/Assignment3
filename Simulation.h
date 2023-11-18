#include <fstream>
#include "Queue.h"
#include "Customer.h"
#ifndef ASSIGNMENT3_SIMULATION_H
#define ASSIGNMENT3_SIMULATION_H

class Simulation {
public:
    Simulation() : currentDelay(0) , averageDelay(0) {}
    void processCustomers(Queue<Customer> bankCustomers);
    void processTransaction(Customer customer);
    void printStatistics();
private:
    int maxDelay = 0;
    int currentDelay = 0;
    double averageDelay = 0;
    int elapsedTime = 0;
    int customerCount = 0;

};


#endif //ASSIGNMENT3_SIMULATION_H
