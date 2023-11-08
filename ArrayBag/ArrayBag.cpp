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
bool ArrayBag::removeAll(int item){
    bool remove = false;
    if(lastIndex > -1){
        for(int i = 0 ; i <= lastIndex ; i++){
            if(item == items[i]) {
                items[i] = items[lastIndex];
                i = 0;
                lastIndex--;
                remove = true;
            }
        }
    }
    return remove;
}
int ArrayBag::findMax(){
    int max = -1000000; //Sentinel value
    if(lastIndex > -1){
        max = items[0];
        for(int i = 0 ; i <= lastIndex ; i++){
            if(max < items[i]){
                max = items[i];
            }
        }
    }
    return max;
}
int ArrayBag::findMin(){
    int min = 1000000;
    if(lastIndex > -1){
        min = items[0];
        for(int i = 0 ; i <= lastIndex ; i++){
            if(min > items[i]){
                min = items[i];
            }
        }
    }
    return min;
}
int ArrayBag::sumElements(int index){
    if(index == -1){
        return 0;
    }
    return items[index] + sumElements(index-1);
}
int ArrayBag::multiplyElements(int index){
    if(index == -1){
        return 1;
    }
    return items[index] * multiplyElements(index-1);
}
void ArrayBag::allFreq(){
    int freq = 0;
    int max = findMax();
    int min = findMin();
    for(int i = min ; i <= max ; i++){
        for(int j = 0 ; j <=lastIndex ; j++){
            if(i == items[j]){
                freq ++;
            }
        }
        if(freq > 0){
            cout << "Freq. of " << i << " : " << freq << endl;
        }
        freq = 0;
    }
}
void ArrayBag::reverseArray(){
    int temp;
    for(int i = 0 ; i <= lastIndex ; i++){
        if(lastIndex - i < i){
            break;
        }
        temp = items[i];
        items[i] = items[lastIndex - i];
        items[lastIndex - i] = temp;
    }
}
void ArrayBag::remainEven(){
    for(int i = 0 ; i <= lastIndex ; i++){
        if(items[i] % 2 == 1){
            remove(items[i]);
            i=0;
        }
    }
}
void ArrayBag::remainOdd(){
    for(int i = 0 ; i <= lastIndex ; i++){
        if(items[i] % 2 == 0){
            remove(items[i]);
            i=0;
        }
    }
}