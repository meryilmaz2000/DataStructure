//
// Created by eryil on 4.11.2023.
//

#include "LinkedBag.h"


LinkedBag::LinkedBag(){
    this->itemCount = 0;
    this->headptr = nullptr;
}
int LinkedBag::getCurrentSize(){
    return itemCount;
}
bool LinkedBag::isEmpty(){
    return headptr == nullptr; // itemCount == 0;
}
bool LinkedBag::add(int item){
    Node *newAddedNode = new Node(item);
    if(itemCount == 0){ //add as a first element
        headptr = newAddedNode;
        itemCount++;
    }
    else{
        if(newAddedNode->getItem() <= headptr->getItem()){
            newAddedNode->setNext(headptr);
            headptr = newAddedNode;
            itemCount++;
        }
        else{
            Node *prev;
            for(Node* curr = headptr ; (curr != nullptr) && (curr->getItem() <= newAddedNode->getItem()); curr = curr->getNext()){
                prev = curr;
            }

            newAddedNode->setNext(prev->getNext());
            prev->setNext(newAddedNode);
            itemCount++;
        }
    }
    return true;
}
bool LinkedBag::remove(int item){
    if(itemCount == 0){
        return false;
    }
    else{
        Node *deletedNode;
        if(headptr->getItem() == item){
            //remove first element
            deletedNode = headptr;
            headptr = headptr->getNext();
            deletedNode->setNext(nullptr);
            delete deletedNode;
            deletedNode = nullptr;
            itemCount--;
        }
        else{
            Node *curr = headptr;
            Node *prev;
            while(curr != nullptr){
                if(curr->getItem() == item){
                    deletedNode = curr;
                    break;
                }
                prev= curr;
                curr = curr->getNext();
            }
            if(curr != nullptr){
                prev->setNext(deletedNode->getNext());
                deletedNode->setNext(nullptr);
                delete deletedNode;
                deletedNode = nullptr;
                itemCount--;
            }
            else{
                return false;
            }

        }
        return true;
    }
}

void LinkedBag::clear(){
    Node *clear;
    if(itemCount != 0){
        while (headptr != nullptr){
            clear = headptr;
            headptr = headptr->getNext();
            clear->setNext(nullptr);
            delete clear;
            clear = nullptr;

        }
    }
    itemCount = 0;
}
int LinkedBag::getFreqOf(int item){
    int freq = 0;
    Node *curr = headptr;
    for(; curr != nullptr ; curr = curr->getNext()){
        if(curr->getItem() == item){
            freq ++;
        }
    }
    return freq;
}
bool LinkedBag::contains(int item){
    Node *curr = headptr;
    while(curr != nullptr){
        if(curr->getItem() == item){
            return true;
        }
        curr = curr->getNext();
    }
    return false;
}
void LinkedBag::printList(){
    Node *printedNode;
    int i = 1;
    for(printedNode = headptr ; printedNode != nullptr; printedNode = printedNode->getNext()){
        cout << "Item - " << i << " : "<< printedNode->getItem()<< endl;
        i++;
    }
}

void LinkedBag::reverseList(){
    int numberOfElement = 0 ;
    for(Node *curr = headptr ; curr != nullptr ; curr = curr->getNext()){
        numberOfElement++;
    }
    Node *curr = headptr;
    Node *nodeArray[numberOfElement];
    for(int i = 0 ; i < numberOfElement ; i++){
        nodeArray[i] = curr;
        curr = curr->getNext();
    }
    headptr = nodeArray[numberOfElement-1];
    for(int i = numberOfElement-1 ; i != 0 ; i--){
        nodeArray[i]->setNext(nodeArray[i-1]);
    }
    nodeArray[0]->setNext(nullptr);

}
int LinkedBag::sumElements(Node *node){
    if(node == nullptr) {
        return 0;
    }
    return node->getItem() + sumElements(node->getNext());
}
int LinkedBag::multiplyElements(Node *node){
    if(node == nullptr) {
        return 1;
    }
    return node->getItem() * multiplyElements(node->getNext());
}
void LinkedBag::allFreq(){
    Node *curr = headptr;
    int currentValue , counter = 0 , currentFreq = 0;
    for( ; curr != nullptr ; curr = curr->getNext()){
        currentValue = curr->getItem();
        currentFreq = getFreqOf(currentValue);
        for(int i = 0 ; i < currentFreq-1 ; i++){
            curr = curr->getNext();
        }
        cout << "Freq. of "<< currentValue << " : "<< currentFreq << endl;
    }
}
void LinkedBag::remainOdd(){
    if(itemCount != 0 ){
        for(Node *curr = headptr ; curr != nullptr ; curr = curr->getNext()){
            if(curr->getItem() % 2 == 0){
                remove(curr->getItem());
                curr = headptr;
            }
        }
    }
}
void LinkedBag::remainEven(){
    if(itemCount != 0 ){
        for(Node *curr = headptr ; curr != nullptr ; curr = curr->getNext()){
            if(curr->getItem() % 2 == 1){
                remove(curr->getItem());
                curr = headptr;
            }
        }
    }
}
Node* LinkedBag::getHeadPtr(){
    return this->headptr;
}