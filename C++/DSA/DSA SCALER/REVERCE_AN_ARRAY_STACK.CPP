#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string inputString;
    stack<char> charStack;

    cout << "Enter the string you want to reverse: ";
    cin >> inputString;

    for (int i = 0; i < inputString.length(); i++)
    {
        charStack.push(inputString[i]);
    }

    string reversedString = "";

    for (int i = 0; i < inputString.length(); i++)
    {
        reversedString += charStack.top();
        charStack.pop();
    }

    cout << "The reverse of the given string is: " << reversedString << endl;

    return 0;
}
