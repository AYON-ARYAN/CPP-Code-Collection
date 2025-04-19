#include <iostream>
using namespace std;
inline int product(int a, int b) // inline function makes the processing of the function faster it directly stores data asa*bd directly printsthe value of func
//either you wii call the function the valus of a and b wil cohange and stuff
{
    return a * b;
};
int main()
{
    int a, b;
    cout << "Enter the value of a and b ";
    cin >> a >> b;
    cout << "Product of A and b is " << product(a, b);
    return 0;
}