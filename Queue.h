//
// Created by T D  on 11/6/23.
//

#ifndef ASSIGNMENT3_QUEUE_H
#define ASSIGNMENT3_QUEUE_H

#include "QueueADT.h"
#include "Node.h"

template <class T>
class Queue : public QueueADT<T> {
public:
     Queue<T>();
     void enqueue(const T& data);     // Add to queue from the back
     T& dequeue();                // Remove from queue from the front
     T& peek();                  // Returns the value of the front element
     void print();               //  Prints out the entire queue
     bool isEmpty();             // Check if queue is empty
     bool isFull();              // Check if queue is full
private:
    int count = 0;              //directions say 100 is full
    Node<T>* m_pHead;
    Node<T>* m_pTail;
};

static void functionName(params){}




#endif //ASSIGNMENT3_QUEUE_H
