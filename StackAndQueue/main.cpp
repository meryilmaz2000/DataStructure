#include <iostream>
#include "ArrayBasedStack.h"
#include "Queue.h"
#include "iostream"

using namespace std;

bool palindrome(int arr[], int n){
    ArrayBasedStack stack;
    Queue queue;
    int peekStack , peekQueue;
    for(int i = 0 ; i< n ; i++){
        queue.enqueue(arr[i]);
        stack.push(arr[i]);
    }
    for(int i = 0 ; i<n ; i++){
        peekQueue = queue.peekFront();
        peekStack = stack.peek();
        if(peekStack == peekQueue){
            queue.dequeue();
            stack.pop();
            continue;
        }
        else{
            cout <<"Not Palindrome !"<<endl;
            return false;
        }
    }
    cout << "Palindrome ! "<<endl;
    return true;
}



int main() {
    /*
    STACK
     */
    /*
    bool empty;
    int peek;
    ArrayBasedStack arrayBasedStack;
    empty = arrayBasedStack.isEmpty();
    cout << "Empty : "<< empty << endl;
    cout << "Print -1 "<<endl;
    arrayBasedStack.push(5);
    arrayBasedStack.push(4);
    arrayBasedStack.push(7);
    arrayBasedStack.printStack();
    peek = arrayBasedStack.peek();
    cout << "Peek : "<< peek << endl;
    arrayBasedStack.pop();
    cout << "Print -2 "<<endl;
    arrayBasedStack.printStack();
    empty = arrayBasedStack.isEmpty();
    cout << "Empty : "<< empty << endl;
    peek = arrayBasedStack.peek();
    cout << "Peek : "<< peek << endl;
    arrayBasedStack.pop();
    arrayBasedStack.pop();
    arrayBasedStack.pop();
    arrayBasedStack.pop();
    arrayBasedStack.pop();
    peek = arrayBasedStack.peek();
    cout << "Peek : "<< peek << endl;*/

    /*
    QUEUE
     */
    /*
    bool emptyQ ;
    int peek;
    Queue q;
    emptyQ = q.isEmpty();
    cout << "Empty Q : "<< emptyQ << endl;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(9);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(9);
    q.printQueue();
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.dequeue();
    peek = q.peekFront();
    cout << "Peek : "<< peek << endl;
    q.printQueue();*/

    int myArray[5] = {1,2,3,2,1};
    palindrome(myArray,5);
    int myArray2[7] = {1,2,4,4,2,1,8};
    palindrome(myArray2,7);
    return 0;
}
