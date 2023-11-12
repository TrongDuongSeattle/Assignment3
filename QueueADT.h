// Abstract class that cannot be instantiated
// Template queue class with associated methods
#ifndef QUEUEADT_H
#define QUEUEADT_H
#include <iostream>

using namespace std;

template <class T>
class QueueADT
{
    public:
        virtual void enqueue(const T& data) = 0;     // Add to queue from the back
        virtual T& dequeue() = 0;               // Remove from queue from the front
        virtual T& peek() = 0;                  // Returns the value of the front element
        virtual void print() = 0;               // Prints out the entire queue
        virtual bool isEmpty() = 0;             // Check if queue is empty
        virtual bool isFull() = 0;              // Check if queue is full
};

#endif