//
// Created by eryil on 4.11.2023.
//

#include "Node.h"


Node::Node(int item){
    this->item = item;
    this->next = nullptr;
}
int Node::getItem(){
    return this->item;
}
void Node::setItem(int item){
    this->item = item;
}
void Node::setNext(Node *next){
    this->next = next;
}
Node* Node::getNext(){
    return this->next;
}