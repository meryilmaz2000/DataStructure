//
// Created by eryil on 4.11.2023.
//

#ifndef LINKEDLIST_LINKEDBAG_H
#define LINKEDLIST_LINKEDBAG_H
#include "Node.h"
#include "iostream"

using namespace std;
class LinkedBag {
public:
    LinkedBag();
    int getCurrentSize(); //To learn current size of linked list
    bool isEmpty(); //To learn if the linked list is empty or not
    bool add(int item); //To add new element considering the sorting
    bool remove(int item); //To remove the Node whose item is given
    void clear(); //To clear all linked list
    int getFreqOf(int item); //To learn number of given item
    bool contains(int item); //To learn if given item is in the linked list or not
    void printList(); //To print all list element
    void reverseList(); //To reverse the order

private:
    int itemCount;
    Node *headptr;
};


#endif //LINKEDLIST_LINKEDBAG_H
