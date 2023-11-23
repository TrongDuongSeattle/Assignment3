#include <iostream>
#include <fstream>
#include "Queue.h"
#include "Queue.cpp"
#include "Customer.h"
#include "Simulation.h"

int main()
{
    Queue<Customer> bankCustomers = readCustomers();   // Read the list of customers and arrival times from a file
    Simulation bankSimulation;
    std::cout << "Processing Customers:" << std::endl;
    bankSimulation.processCustomers(bankCustomers);     // Simulates the teller serving the customers in the queue
    bankSimulation.printStatistics();                   // Prints out the maximum delay and the average delay
    return 0;
}

