#include <iostream>
using namespace std;
int factorial(int a)

{
    int b=1;
    for (int i = 1; i <=a; i++)
    {
        b=b*i;
    }
    return b;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The factorial of " << n << " is : " << factorial(n);

    // 6!=1*2*3*4*5*6
    return 0;
}