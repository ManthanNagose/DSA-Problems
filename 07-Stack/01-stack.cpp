#include <iostream>
using namespace std;

const int N = 100;

class Stack {
private:
    int StackArray[N];
    int size, top;

public:
    Stack(int s) {
        size = s;
        top = -1;
    }

    // Push a single element
    void push(int item) {
        if (top == size - 1) {
            cout << "Stack is Full!" << endl;
        } else {
            StackArray[++top] = item;
            cout << "Pushed " << item << " to stack." << endl;
        }
    }

    // Pop the top element
    void pop() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Popped " << StackArray[top] << " from stack." << endl;
            top--;
        }
    }

    // Display stack from top to bottom
    void Traverse() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << StackArray[i] << " ";
            }
            cout << endl;
        }
    }
};

// Main Function
int main() {
    int s, value, n;

    cout << "Insert the size of stack: ";
    cin >> s;

    Stack stk(s);

    cout << "How many values to push? ";
    cin >> n;

    if (n > s) {
        cout << "Too many values! Max size is " << s << endl;
        return 0;
    }

    cout << "Enter the values to push:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        stk.push(value);
    }

    stk.Traverse();

    cout << "Popping the top element...\n";
    stk.pop();

    stk.Traverse();

    return 0;
}
