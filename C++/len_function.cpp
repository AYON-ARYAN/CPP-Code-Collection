#include <iostream>
#include <string>
using namespace std;
int main()
{
    string txt;
    cout << "Enter a text: ";
    cin >> txt;
    cout << txt[0]; // 0 is the number of letters you want to print
    cout << "The length of the txt string is: " << txt.length();
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
    // Outputs Jello instead of Hello

    return 0;
}