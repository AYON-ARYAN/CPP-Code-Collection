#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number " << i + 1 << endl;
        cin >> arr[i];
    }

    cout << "Original array:" << endl;
    for (int p = 0; p < n; p++)
    {
        cout << arr[p] << " ";
    }
    cout << endl;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array:" << endl;
    for (int l = 0; l < n; l++)
    {
        cout << arr[l] << " ";
    }
    cout << endl;

    return 0;
}
