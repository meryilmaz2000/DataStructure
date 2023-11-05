#include <iostream>
#include "LinkedBag.h"

int main() {
    LinkedBag linkedBag;
    bool empty , contain ;
    int freq = 0 , size = 0;
    empty = linkedBag.isEmpty();
    cout << "isEmpty : " << empty << endl;
    linkedBag.add(3);
    empty = linkedBag.isEmpty();
    cout << "isEmpty : " << empty << endl;
    linkedBag.remove(5);
    cout << "Print-1"<< endl;
    linkedBag.printList();
    linkedBag.remove(3);
    cout << "Print-2"<< endl;
    linkedBag.printList();
    linkedBag.add(6);
    linkedBag.add(1);
    linkedBag.add(3);
    linkedBag.add(9);
    linkedBag.add(2);
    cout << "Print-3"<< endl;
    linkedBag.printList();
    linkedBag.remove(2);
    cout << "Print-4"<< endl;
    linkedBag.printList();
    freq = linkedBag.getFreqOf(3);
    cout << "Freq of 3 : "<< freq << endl;
    linkedBag.add(3);
    freq = linkedBag.getFreqOf(3);
    cout << "Freq of 3 : "<< freq << endl;
    contain = linkedBag.contains(100);
    cout << "Contain 100 : "<< contain << endl;
    contain = linkedBag.contains(9);
    cout << "Contain 9 : "<< contain<< endl;
    cout << "Print-5"<< endl;
    linkedBag.printList();
    size = linkedBag.getCurrentSize();
    cout << "Size : "<< size << endl;
    linkedBag.clear();
    size = linkedBag.getCurrentSize();
    cout << "After clear method, Size : "<< size << endl;
    return 0;
}
