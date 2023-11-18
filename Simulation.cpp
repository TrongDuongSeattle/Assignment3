#include "Simulation.h"
#include "Customer.h"

void Simulation::processCustomers(Queue<Customer> bankCustomers) {
    customerCount = bankCustomers.getCount();
    if (customerCount == 0) {
        maxDelay = -1;
        averageDelay = -1;
    } else {
        Customer prev;
        for (int i = 0; i < customerCount; i++) {
            Customer temp(bankCustomers.peek());
            processTransaction(temp);
            prev = temp;
            bankCustomers.dequeue();
        }
    }
}

void Simulation::processTransaction(Customer customer) {
    maxDelay = elapsedTime - customer.getArrivalTime();
    elapsedTime += customer.getTransactionTime();
    currentDelay += maxDelay;
    averageDelay = currentDelay * 1.0 / customerCount;
}

void Simulation::printStatistics() {
    std::cout << "Max delay " << maxDelay << std::endl;
    std::cout << "Average delay: " << averageDelay  << std::endl;
}

