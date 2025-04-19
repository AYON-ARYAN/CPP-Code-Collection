#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 5;
    float pi = 3.14;
    cout << "Here the value of a is " << a << "\nThe value of b is " << b;
    cout << "\nThe value of pi is" << pi;
    //HOW TO GET INPUT FROM USER///////////////\\\\\\\\\\\\\\\\\\\\\\\

    int x;
    cout << "\nType a number: ";
    cin >> x;
    cout << "Your number is: " << x;

    char v[10];
    cout << "\nEnter your name: ";
    cin >> v;
    cout << "\nHello! Your name is " << v;

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun; // Outputs 1 (true)
    cout << isFishTasty; // Outputs 0 (false)
    ////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////////////////////
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean
    string myText = "Hello";   // String

    return 0;
}
