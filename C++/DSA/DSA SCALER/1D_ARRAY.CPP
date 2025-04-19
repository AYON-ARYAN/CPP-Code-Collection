#include <iostream>
using namespace std;

int main()
{
    int a, c = 0, b = 0;

    cout << "What is sum you want?" << endl;
    cin >> c;

    cout << "What is the number of elements you want in the array?" << endl;
    cin >> a;

    int arr[a];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] + arr[j] == c)
            {
                b++;
            }
        }
    }

    cout << "The number of pairs of elements that sum up to " << c << " is: " << b << endl;

    return 0;
}
