#include <iostream>
using namespace std;

int main()
{
    int n, i;
    char h;
    // +,-,/,*,%,++,-- are operators
    // % shows th remainder
    //++ is increment
    //--is decrement
    cout << "What is the first number: ";
    cin >> n;

    cout << "What is the second number: ";
    cin >> i;

    cout << "What do you want to do (+, -, *, /,%): ";
    cin >> h;

    if (h == '+')
    {
        cout << n + i;
    }
    else if (h == '-')
    {
        cout << n - i;
    }
    else if (h == '*')
    {
        cout << n * i;
    }
    else if (h == '/')
    {
        cout << n / i;
    }
    else if (h == '%')
    {
        cout << n % i;
    }
    else
    {
        cout << "Invalid operator";
    }

    return 0;
}
