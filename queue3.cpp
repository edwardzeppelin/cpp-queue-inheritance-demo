#include "queue3.h"
#include <iostream>

using namespace std;

void myqueue3::addelement(int element) {
    myqueue::addelement(element);
}

void myqueue3::deleteelement() {
    myqueue::deleteelement();
}

void myqueue3::init() {
    myqueue::init();
}

void myqueue3::printqueue() {
    myqueue::printqueue();
}

void myqueue3::copyToQueue(myqueue& otherQueue) {
    myqueue::copyToQueue(otherQueue);
}

void myqueue3::merge(myqueue& otherQueue, myqueue& resultQueue) {
    myqueue::merge(otherQueue, resultQueue);
}

int myqueue3::process() {
    if (getcount() == 0) {
        cerr << "Queue is empty" << endl;
        return -1;
    }

    Node* front = getfront();
    Node* rear = getrear();

    double avg = 0;
    Node* current = front;
    int count = 0;
    while (current != nullptr) {
        avg += current->data;
        current = current->prev;
        count++;
    }
    avg /= count;

    current = front;
    while (current != nullptr) {
        if (current->data > avg) {
            return current->data;
        }
        current = current->prev;
    }

    cerr << "No element bigger than average" << endl;
    return -1;
}