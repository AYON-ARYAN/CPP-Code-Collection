#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 8;

    cout << "Before swapping - x: " << x << ", y: " << y << endl;

    swap(x, y);

    cout << "After swapping - x: " << x << ", y: " << y << endl;
    cout << "The Sum is: " << sum(x, y) << endl;

    return 0;
}
// call by value tells us that the value of a local variable remains unhampered by the value of a global variable
// you can use call bu value as swap(x,y)this x,y in the main func remains unaffected of their values