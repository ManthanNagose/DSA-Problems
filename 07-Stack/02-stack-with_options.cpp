#include <iostream>
using namespace std;

const int N = 100;

class Stack
{
    int stk[N];
    int size, top;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
    }

    void Push(int item)
    {
        if (top == size - 1)
        {
            cout << "Stack is Overflow" << endl;
        }
        else
        {
            stk[++top] = item;
        }
    }

    void Pop()
    {
        int item;
        if (top == -1)
        {
            cout << "Stack is UnderFlow " << endl;
        }
        else
        {
            item = stk[top];
            top--;
        }
    }

    void Traverse()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stk[i] << " ";
        }
    }
};

int main()
{
    int s, value, option, i;
    cout << "Enter the size of the stack: ";
    cin >> s;
    Stack st(s);

    do {
        cout << endl << "Enter option from the following:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                st.Push(value);
                cout << "Current stack: ";
                st.Traverse();
                cout << endl;
                break;
            case 2:
                st.Pop();
                cout << "Current stack: ";
                st.Traverse();
                cout << endl;
                break;
            case 3:
                cout << "Thank You" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 3);

    return 0;
}