#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int size) {
    array = new int[size];
    this->size = size;
    top = -1;
}

Stack::~Stack() {
    delete[] array;
}

void Stack::push(int num) {
    if (isFull()) {
        cout << "The stack is full. Cannot push " << num << ".\n";
    }
    else {
        top++;
        array[top] = num;
    }
}

void Stack::pop() {
    if (isEmpty()) {
        cout << "The stack is empty. Cannot pop.\n";
    }
    else {
        top--;
    }
}

bool Stack::isFull() {
    return top == size - 1;
}

bool Stack::isEmpty() {
    return top == -1;
}

int Stack::peek() {
    if (!isEmpty()) {
        return array[top];
    }
    else {
        cout << "The stack is empty. No top element.\n";
        return -1; 
    }
}

void Stack::display() {
    if (isEmpty()) {
        cout << "The stack is empty.\n";
    }
    else {
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; i--) {
            cout << "array[" << i << "] = " << array[i] << endl;
        }
    }
}
