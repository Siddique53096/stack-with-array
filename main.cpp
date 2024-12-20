#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
    int size, choice, num;

    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack myStack(size);

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the number to push: ";
            cin >> num;
            myStack.push(num);
            break;

        case 2:
            myStack.pop();
            break;

        case 3:
            num = myStack.peek();
            if (num != -1) {
                cout << "Top element is: " << num << endl;
            }
            break;

        case 4:
            myStack.display();
            break;

        case 5:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
