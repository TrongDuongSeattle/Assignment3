//
// Created by Leafylotus on 11/13/2023.
//
#include "Simulation.h"
#include "Customer.h"

void Simulation::processCustomers(Queue<Customer> bankCustomers) {
    customerCount = bankCustomers.getCount();
    if (customerCount == 0) {
        maxDelay = -1;
        averageDelay = -1;
    } else {
        for (int i = 0; i < customerCount; i++) {
            Customer temp(bankCustomers.peek());
            processTransaction(temp);
            bankCustomers.dequeue();
        }
    }
}


/**
 * time of arrival
 *  if time of arrival is same as previous
 *      set to 0;
 * duration of transaction
 *
 * elapsedTime: sum of ALL transaction time
 *      increment
 *
 *
 *
 * @param customer
 *
 * 0    5
 * 0    5
 * 5    10
 * 5    10

 */
void Simulation::processTransaction(Customer customer) {
    maxDelay = elapsedTime - customer.getTransactionTime();
    elapsedTime += customer.getTransactionTime();
    currentDelay += customer.getArrivalTime() - customer.getArrivalTime();
    averageDelay = currentDelay * 1.0 / customerCount;
}

void Simulation::printStatistics() {
    std::cout << "Max delay " << maxDelay << std::endl;
    std::cout << "Average delay: " << averageDelay  << std::endl;
    std::cout << "Current delay: " << currentDelay  << std::endl;
}

