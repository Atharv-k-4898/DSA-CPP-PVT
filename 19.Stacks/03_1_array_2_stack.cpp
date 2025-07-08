#include <iostream>
using namespace std;

class stack
{
public:
    int top1, top2;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
            cout << "Stack Overflow\n";
        else
            arr[++top1] = data;
    }

    void pop1()
    {
        if (top1 == -1)
            cout << "Stack Underflow\n";
        else
            top1--;
    }

    void push2(int data)
    {
        if (top2 - top1 == 1)
            cout << "Stack Overflow\n";
        else
            arr[--top2] = data;
    }

    void pop2()
    {
        if (top2 == size)
            cout << "Stack Underflow\n";
        else
            top2++;
    }

    void printStack1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is Empty\n";
            return;
        }
        cout << "Stack 1: ";
        for (int i = top1; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    void printStack2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 is Empty\n";
            return;
        }
        cout << "Stack 2: ";
        for (int i = top2; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    int size;
    cout << "Enter total array size: ";
    cin >> size;

    stack s(size);  // ✅ Correct object declaration

    int choice, value;
    while (1)
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Push to Stack 1\n";
        cout << "2. Pop from Stack 1\n";
        cout << "3. Push to Stack 2\n";
        cout << "4. Pop from Stack 2\n";
        cout << "5. Exit\n";
        cout << "6. Print Stack 1\n";
        cout << "7. Print Stack 2\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push in Stack 1: ";
            cin >> value;
            s.push1(value);
            break;
        case 2:
            s.pop1();
            break;
        case 3:
            cout << "Enter value to push in Stack 2: ";
            cin >> value;
            s.push2(value);
            break;
        case 4:
            s.pop2();
            break;
        case 5:
            cout << "Exiting...\n";
            return 0;
        case 6:
            s.printStack1();
            break;
        case 7:
            s.printStack2();
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}
