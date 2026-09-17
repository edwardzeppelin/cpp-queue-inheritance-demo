#include "queue.h"
#include <iostream>

using namespace std;

myqueue::myqueue() {
    init();
}

myqueue::~myqueue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->prev;
        delete temp;
    }
}

void myqueue::init() {
    front = nullptr;
    rear = nullptr;
    cnt = 0;
}

void myqueue::addelement(int element) {
    if (front == nullptr) {
        front = new Node(element);
        rear = front;
    }
    else {
        rear->prev = new Node(element, rear->prev);
        rear = rear->prev;
    }
    cnt++;
}

int myqueue::deleteelement() {
    if (front == nullptr) {
        cerr << "Cannot delete - Queue is empty" << endl;
        return -1;
    }

    int x = front->data;
    cout << "Deleting: " << x << endl;

    Node* temp = front;
    front = front->prev;
    delete temp;

    cnt--;

    return x;
}

void myqueue::copyToQueue(myqueue& otherQueue) {
    Node* current = front;
    while (current != nullptr) {
        otherQueue.addelement(current->data);
        current = current->prev;
    }
}

void myqueue::merge(myqueue& otherQueue, myqueue& resultQueue) {
    Node* current = front;
    while (current != nullptr) {
        resultQueue.addelement(current->data);
        current = current->prev;
    }

    current = otherQueue.front;
    while (current != nullptr) {
        resultQueue.addelement(current->data);
        current = current->prev;
    }
}

void myqueue::printqueue()
{
    Node* temp = front;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}