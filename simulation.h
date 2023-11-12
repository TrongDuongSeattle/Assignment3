//
// Created by T D  on 11/6/23.
//
#include <fstream>
#include "Queue.h"
#include "Customer.h"
#ifndef ASSIGNMENT3_SIMULATION_H
#define ASSIGNMENT3_SIMULATION_H

class simulation {
public:
    void processCustomer();
    int processTransactionTime();
    void printStatistics();
private:
    int currrentDelay;
    int averageDelay;
    int customerCount;

};
static Queue<Customer> readCustomer(){
    Queue<Customer> fed;
    std::ifstream inFile;
    inFile.open("data.txt");
    int size = 0;
    inFile >> size;
    for (int i = 0; i < size; i++) {
        int hereTime;
        int fuckaroundtime;
        inFile >> hereTime;
        inFile >> fuckaroundtime;
        Customer *customer = new Customer(hereTime, fuckaroundtime);
    }
    return fed;
}

#endif //ASSIGNMENT3_SIMULATION_H
