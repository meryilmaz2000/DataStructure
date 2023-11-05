//
// Created by eryil on 5.11.2023.
//

#include "Queue.h"


Queue::Queue() {
    tailPtr = nullptr;
    frontPtr = nullptr;
    itemCount = 0;
}
bool Queue::enqueue(int item){
    Node *newAddedNode = new Node(item);
    if(itemCount == 0){
        frontPtr = newAddedNode;
        tailPtr = newAddedNode;
        itemCount++;
    }
    else if(itemCount == 1){
        frontPtr->setNext(newAddedNode);
        tailPtr = newAddedNode;
        itemCount++;
    }
    else{
        tailPtr->setNext(newAddedNode);
        tailPtr = newAddedNode;
        itemCount++;
    }
    return true;
}
bool Queue::dequeue(){
    if(itemCount != 0){
        Node *deletedNode;
        if(itemCount == 1){
            deletedNode = frontPtr;
            frontPtr = nullptr;
            tailPtr = nullptr;
        }
        else{
            deletedNode = frontPtr;
            frontPtr = frontPtr->getNext();
        }
        deletedNode->setNext(nullptr);
        delete deletedNode;
        deletedNode = nullptr;
        itemCount --;
        return true;
    }
    return false;
}
int Queue::peekFront(){
    if(itemCount != 0){
        return frontPtr->getItem();
    }
    return -100000;
}
bool Queue::isEmpty(){
    return itemCount==0;
}
void Queue::printQueue(){
    Node *printedNode;
    for(printedNode = frontPtr ; printedNode != nullptr ; printedNode = printedNode->getNext()){
        cout << "Element : "<< printedNode->getItem()<<endl;
    }
}
