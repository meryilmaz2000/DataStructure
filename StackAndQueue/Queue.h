//
// Created by eryil on 5.11.2023.
//

#ifndef STACKANDQUEUE_QUEUE_H
#define STACKANDQUEUE_QUEUE_H

#include "Node.h"
#include "iostream"

using namespace std;

class Queue {
private:
    int itemCount;
    Node* frontPtr;
    Node* tailPtr;
public:
    Queue();
    bool enqueue(int item);
    bool dequeue();
    int peekFront();
    bool isEmpty();
    void printQueue();
};


#endif //STACKANDQUEUE_QUEUE_H
