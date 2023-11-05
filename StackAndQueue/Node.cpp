//
// Created by eryil on 5.11.2023.
//

#include "Node.h"

Node::Node(int item){
    this->item = item;
    this->next = nullptr;
}
void Node::setItem(int item){
    this->item = item;
}
void Node::setNext(Node *next){
    this->next = next;
}
int Node::getItem(){
    return this->item;
}
Node* Node::getNext(){
    return this->next;
}
