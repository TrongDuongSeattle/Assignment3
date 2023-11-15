#include <iostream>
#include <fstream>
#include "Queue.h"
#include "Queue.cpp"
#include "Customer.h"
#include "Simulation.h"

//use read customers as a static function in customer class.



int main()
{
    Queue<Customer> bankCustomers = readCustomers();   // Read the list of customers and arrival times from a file
    Simulation bankSimulation;
    std::cout << "Processing Customers:" << std::endl;
    bankSimulation.processCustomers(bankCustomers);     // Simulates the teller serving the customers in the queue
    bankSimulation.printStatistics();                   // Prints out the maximum delay and the average delay
//    std::cout << bankCustomers.peek() << std::endl;
//    bankCustomers.dequeue();
//    std::cout << bankCustomers.peek() << std::endl;
//    bankCustomers.dequeue();
//    std::cout << bankCustomers.peek() << std::endl;
//    bankCustomers.dequeue();
//    std::cout << bankCustomers.peek() << std::endl;
//    bankCustomers.dequeue();




//std::cout << bankCustomers.peek() << std::endl;
//Queue<Customer> q;
//Customer Fed(1,1);
//Customer Ryan(2, 2);
//Customer Shyan(3, 3);
//Customer Frankfurter(4,4);
//
//
//
//q.enqueue(Fed);
//q.enqueue(Ryan);
//q.enqueue(Shyan);
//q.enqueue(Frankfurter);
//
//std::cout << q.peek() << std::endl;
//
//std::cout << q.peek() << std::endl;
//q.dequeue();
//std::cout << q.peek() << std::endl;
//q.dequeue();
//std::cout << q.peek() << std::endl;

    return 0;
}

