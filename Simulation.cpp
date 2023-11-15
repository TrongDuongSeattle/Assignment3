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
 * @param customer
 */
void Simulation::processTransaction(Customer customer) {
    maxDelay = elapsedTime - customer.getArrivalTime();

    elapsedTime += customer.getTransactionTime() - ;
    currentDelay += maxDelay;
    averageDelay = currentDelay * 1.0 / customerCount;
}

void Simulation::printStatistics() {
    std::cout << "Max delay " << maxDelay << std::endl;
    std::cout << "Average delay: " << averageDelay  << std::endl;
}

