#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class myqueue {

public:
    struct Node {
        int data;
        Node* prev;

        Node(int value, Node* prevNode = nullptr) : data(value), prev(prevNode) {}
    };

    myqueue();
    ~myqueue();

    void init();
    void addelement(int element);
    int deleteelement();
    void printqueue();

    bool isEmpty() { return front == nullptr; }

    void copyToQueue(myqueue& otherQueue);

    void merge(myqueue& otherQueue, myqueue& resultQueue);

    Node* getfront() const { return front; }
    Node* getrear() const { return rear; }
    int getcount() const { return cnt; }

private:
    Node* front;
    Node* rear;
    int cnt;
};

#endif
