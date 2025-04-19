#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer to reverse: ";
    cin >> num;

    stack<int> digitStack;

    int temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        digitStack.push(digit);
        temp /= 10;
    }

    int reversedNum = 0;
    int position = 1;
    while (!digitStack.empty())
    {
        int digit = digitStack.top();
        digitStack.pop();
        reversedNum += digit * position;
        position *= 10;
    }

    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}