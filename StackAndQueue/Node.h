//
// Created by eryil on 5.11.2023.
//

#ifndef STACKANDQUEUE_NODE_H
#define STACKANDQUEUE_NODE_H


class Node {
public:
    Node(int item);
    void setItem(int item);
    void setNext(Node *next);
    int getItem();
    Node* getNext();
private:
    int item;
    Node* next;
};


#endif //STACKANDQUEUE_NODE_H
