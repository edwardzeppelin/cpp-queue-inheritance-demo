#include <iostream>
#include "queue1.h"
#include "queue2.h"5
#include "queue3.h"

using namespace std;

void displayMenu() {
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "1 - Add element in queue" << endl;
    cout << "2 - Delete element from queue" << endl;
    cout << "3 - Print queue" << endl;
    cout << "4 - Process queue" << endl;
    cout << "5 - Make a copy of queue" << endl;
    cout << "6 - Union queues" << endl;
    cout << "7 - Exit" << endl;
    cout << "Choose an action: ";
}

int main() {
    myqueue1 queue1;

    myqueue copiedqueue;
    myqueue unionqueue;

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int element;
            cout << "Enter element: ";
            cin >> element;
            queue1.addelement(element);
            break;
        }
        case 2:
            queue1.deleteelement();
            break;
        case 3: {
            cout << "----------------------------------------------------------------------------" << endl;
            cout << "Queue: ";
            queue1.printqueue();
            break;
        }
        case 4: {
            int result = queue1.process();
            if (result != -1)
                cout << "First element bigger than average: " << result << endl;
            break;
        }
        case 5: {
            queue1.copyToQueue(copiedqueue);
            cout << "Copy of queue:" << endl;
            copiedqueue.printqueue();
            break;
        }
        case 6: {
            queue1.merge(copiedqueue, unionqueue);
            cout << "Result: ";
            unionqueue.printqueue();
            break;
        }
        case 7:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Try again" << endl;
        }
    } while (choice != 7);

    return 0;
}