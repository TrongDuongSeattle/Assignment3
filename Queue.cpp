//
// Created by T D  on 11/6/23.
//
#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    m_pHead = m_pTail = nullptr;
}
/**
 * if it's empty
 * if it's not full
 * if not full
 *  if empty
 */
template<class T>
 void Queue<T>::enqueue(const T& data) {
    Node<T>* addToQueue = new Node<T>(data);
    if (isEmpty()) {
        m_pHead = m_pTail = addToQueue;
    } else if (!isFull()) {
        m_pTail->setNext(addToQueue);
        m_pTail = m_pTail->getNext(); //could also write m_pTail = addToQueue;
    }
    count++;
}

template <class T>
bool Queue<T>::isEmpty() {
    return m_pHead == nullptr;
}
/**
 * Queue at most can hold 100 people
 * @tparam T
 * @return
 */
template<class T>
bool Queue<T>::isFull() {
    return count >= 100;
}
/**
 * removes
 * @tparam T
 * @return
 */
template <class T>
T& Queue<T>::dequeue() {
    // m_pHead = m_pHead->next; leaves a dangling ptr
    if(!isEmpty()) {
        Node<T> *removeNode = m_pHead;
        //T& returnData = m_pHead->getData();
        T *obj  = new T(m_pHead->getData());
        m_pHead = m_pHead->getNext();
        if (m_pHead == nullptr) {
            m_pTail = nullptr;
        }
        delete removeNode;
        count--;
        return *obj;
    } else {
        throw std::runtime_error("FUCK C++");
    }
}

template <class T>
T& Queue<T>::peek() {
    /**
     * stores local variable
     * hey heres a special variable heres adresss
     * peek closes
     * data lost
     */
     T& data = m_pHead->getData();//mebbe head
     return data;
}

template <class T>
void Queue<T>::print(){
    if (isEmpty()){
        std::cout << "shits empty, bro" << std::endl;
    }
}