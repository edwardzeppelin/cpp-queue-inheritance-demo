#ifndef QUEUE2_H
#define QUEUE2_H

#include "queue.h"

class myqueue2 : private myqueue {

public:

    void addelement(int element);
    void init();
    void deleteelement();
    void printqueue();

    void copyToQueue(myqueue& otherQueue);
    void merge(myqueue& otherQueue, myqueue& resultQueue);

	int process();
};

#endif