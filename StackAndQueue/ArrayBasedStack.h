//
// Created by eryil on 5.11.2023.
//

#ifndef STACKANDQUEUE_ARRAYBASEDSTACK_H
#define STACKANDQUEUE_ARRAYBASEDSTACK_H

const int DEFAULT_CAPACITY = 10;

class ArrayBasedStack {
public:
    ArrayBasedStack();
    bool isEmpty();
    bool pop();
    bool push(int item);
    int peek();
    void printStack();
private:
    int top;
    int items[DEFAULT_CAPACITY];
};


#endif //STACKANDQUEUE_ARRAYBASEDSTACK_H
