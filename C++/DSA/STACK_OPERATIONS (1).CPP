#include <iostream>
using namespace std;

#define Number 4

int stack[Number];
int top = -1;

void init()
{
    top = -1;
}

int is_full()
{
    return top == (Number - 1);
}

int is_empty(); // Function declaration

void push(int item)
{
    if (::is_full())
    { // Explicitly specifying global namespace
        cout << "The stack is full and overflowing" << endl;
        return;
    }
    stack[++top] = item;
}

int pop()
{
    if (::is_empty())
    { // Explicitly specifying global namespace
        cout << "Stack is empty" << endl;
        return -1; // Return -1 indicating error
    }
    return stack[top--];
}

int peek()
{
    if (::is_empty())
    { // Explicitly specifying global namespace
        cout << "Stack is empty" << endl;
        return -1;
    }
    return stack[top];
}

int is_empty()
{ // Function definition
    return top == -1;
}

int main()
{
    init();
    int a, b, c, d;
    cout << "Enter up to " << Number << " numbers you want to push into the stack: ";
    cin >> a >> b >> c >> d;

    push(a);
    push(b);
    push(c);
    push(d);

    cout << "is_full() returns: " << is_full() << endl;
    cout << "peek() returns: " << peek() << endl;

    pop();
    pop();

    cout << "peek() returns: " << peek() << endl;
    return 0;
}
