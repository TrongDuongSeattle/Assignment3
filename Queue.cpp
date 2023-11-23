#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    m_pHead = m_pTail = nullptr;
}

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

template<class T>
bool Queue<T>::isFull() {
    return count >= 100;
}

template <class T>
T& Queue<T>::dequeue() {
    if(!isEmpty()) {
        Node<T> *removeNode = m_pHead;
        T *obj  = new T(m_pHead->getData());
        m_pHead = m_pHead->getNext();
        if (m_pHead == nullptr) {
            m_pTail = nullptr;
        }
        delete removeNode;
        count--;
        return *obj;
    } else {
        throw std::runtime_error("Empty Queue");
    }
}

template <class T>
T& Queue<T>::peek() {
     T& data = m_pHead->getData();
     return data;
}

template <class T>
void Queue<T>::print(){
    if (isEmpty()){
        std::cout << "Empty Queue" << std::endl;
    }
}