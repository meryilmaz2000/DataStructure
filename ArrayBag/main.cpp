#include <iostream>
#include "ArrayBag.h"

using namespace std;
int main() {
    int size , freq;
    bool contain , empty;
    ArrayBag arrayBag;
    empty = arrayBag.isEmpty();
    cout << "Empty : "<< empty << endl;
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.add(4);
    arrayBag.add(1);
    arrayBag.add(6);
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.printArray();
    arrayBag.remove(5);
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.printArray();
    arrayBag.remove(4);
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.printArray();
    contain = arrayBag.contains(1);
    cout << "Contain 1 : "<< contain << endl;
    arrayBag.remove(1);
    contain = arrayBag.contains(1);
    cout << "Contain 1 : "<< contain << endl;
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.printArray();
    empty = arrayBag.isEmpty();
    cout << "Empty : "<< empty << endl;
    arrayBag.add(10);
    arrayBag.add(20);
    arrayBag.add(-58);
    freq = arrayBag.getFreqOf(20);
    cout << "Freq 20 : "<< freq << endl;
    arrayBag.printArray();
    arrayBag.add(20);
    freq = arrayBag.getFreqOf(20);
    cout << "Freq 20 : "<< freq << endl;
    arrayBag.clear();
    size = arrayBag.getCurrentSize();
    cout <<"Size : "<< size << endl;
    arrayBag.printArray();
    return 0;
}
