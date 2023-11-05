//
// Created by eryil on 4.11.2023.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H


class Node {
private:
    int item;
    Node *next;
public:
    Node(int item);
    int getItem();
    void setItem(int item);
    void setNext(Node *next);
    Node* getNext();
};


#endif //LINKEDLIST_NODE_H
