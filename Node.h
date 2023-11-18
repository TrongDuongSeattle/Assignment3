#ifndef ASSIGNMENT3_NODE_H
#define ASSIGNMENT3_NODE_H

template <class T>
class Node {
public:
    Node(T data) : m_data(data), m_pNext(nullptr) {}

    T& getData() { return m_data; }

    void setData(T data) { m_data = data; }

    Node<T>* getNext() { return m_pNext; }

    void setNext(Node<T> *next) { m_pNext = next; }

private:
    T m_data;
    Node<T> *m_pNext;
};

#endif //ASSIGNMENT3_NODE_H
