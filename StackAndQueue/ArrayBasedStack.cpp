//
// Created by eryil on 5.11.2023.
//

#include "ArrayBasedStack.h"
#include "iostream"

using namespace std;

ArrayBasedStack::ArrayBasedStack(){
    this->top = -1;
}
bool ArrayBasedStack::isEmpty(){
    return top < 0;
}
bool ArrayBasedStack::pop(){
    if(top >= 0){
        top--;
        return true;
    }
    return false;
}
bool ArrayBasedStack::push(int item){
    if(top< DEFAULT_CAPACITY-1){
        top++;
        items[top] = item;
        return true;
    }
    return false;
}
int ArrayBasedStack::peek(){
    if(top>= 0){
        return items[top];
    }
    return -100000;  //Sentinel value
}
void ArrayBasedStack::printStack(){
    for(int i = top ; i >= 0 ; i--){
        cout << "Element : "<<items[i] << endl;
    }
}