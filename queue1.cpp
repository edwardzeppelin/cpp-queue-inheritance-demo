#include "queue1.h"
#include <iostream>

using namespace std;

int myqueue1::process() {
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