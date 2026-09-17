#ifndef QUEUE3_H
#define QUEUE3_H

#include "queue.h"

class myqueue3 : protected myqueue {

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
