#include <iostream>
using namespace std;

class Employee
{
public:
    int a, b, c;

private:
    int d, e, f;

public:
    void setData(int a1, int b1, int c1, int d1, int e1, int f1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
        cout << "The value of f is " << f << endl;
    }
};

void Employee::setData(int a1, int b1, int c1, int d1, int e1, int f1)
{
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
    f = f1;
}

int main()
{
    Employee Harry;
    Harry.setData(1, 2, 3, 4, 5, 6);
    Harry.getData();

    return 0;
}
