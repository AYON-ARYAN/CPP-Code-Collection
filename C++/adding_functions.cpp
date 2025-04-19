#include <iostream>
using namespace std;

int sum(int a)
{
    int b = 0;

    for (; a > 0; a /= 10)//for running again and again till value of a becomes 0 
    {
        int l = a % 10;//extracting numbers
        b += l;//adding the numbers
    }

    return b;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sum(n);

    cout << "Sum of digits: " << result << endl;

    return 0;
}
