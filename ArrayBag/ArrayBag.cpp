//
// Created by eryil on 5.11.2023.
//

#include "ArrayBag.h"
#include "iostream"
using namespace std;
ArrayBag::ArrayBag(){
    lastIndex = -1;
}
int ArrayBag::getCurrentSize(){
    return lastIndex+1;
}
bool ArrayBag::isEmpty(){
    return lastIndex<0;
}
bool ArrayBag::add(int item){
    if(lastIndex < SIZE-1){
        lastIndex++;
        items[lastIndex] = item;
        return true;
    }
    return false;
}
bool ArrayBag::remove(int item){
    if(lastIndex >= 0){
        for(int i = 0 ; i <= lastIndex ; i++){
            if(item == items[i]){
                items[i] = items[lastIndex];
                lastIndex--;
                return true;
            }
        }
    }
    return false;
}
void ArrayBag::clear(){
    lastIndex = -1;
}
int ArrayBag::getFreqOf(int item){
    int freq = 0;
    for(int i = 0 ; i<= lastIndex ; i++){
        if(item == items[i]){
            freq ++;
        }
    }
    return freq;
}
bool ArrayBag::contains(int item){
    bool contain = false;
    for(int i = 0 ; i <= lastIndex ; i++){
        if(item == items[i]){
            contain = true;
        }
    }
    return contain;
}
void ArrayBag::printArray(){
    for(int i = 0 ; i <= lastIndex ; i++){
        cout << "Element - "<< i+1 << " : "<< items[i] << endl;
    }
}