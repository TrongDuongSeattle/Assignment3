//
// Created by Leafylotus on 11/11/2023.
//
#include <iostream>
#ifndef ASSIGNMENT3_CUSTOMER_H
#define ASSIGNMENT3_CUSTOMER_H


class Customer {
public:
    Customer() : arriveTime(0), transactionTime(0) {}
    Customer(int arrivalTime, int transactionDuration) : arriveTime(arrivalTime), transactionTime(transactionDuration) {}

    int getArrivalTime() { return arriveTime; }
    int getTransactionTime() { return transactionTime; }


private:
    int arriveTime;
    int transactionTime;
};

static std::ostream& operator<<(std::ostream& os, Customer& customer) {
    return os << "Customer arrival Time: " << customer.getArrivalTime() << " Transaction Duration: " << customer.getTransactionTime();
}
#endif //ASSIGNMENT3_CUSTOMER_H
