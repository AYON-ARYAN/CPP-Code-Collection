//String swapping
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, temp;

    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nFirst String after swap: " << a;
    cout << "\nSecond String after swap: " << b;

    return 0;
}
