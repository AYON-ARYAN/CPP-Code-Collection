#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter the total number of elements you want in the array: ";
    cin >> a;
    int arr[a];

    // Input of the array
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    // Output of the array
    cout << "The array is: ";
    for (int j = 0; j < a; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    // Sum of the elements of the array
    int sum = 0;
    for (int k = 0; k < a; k++)
    {
        sum += arr[k];
    }
    cout << "The sum is: " << sum << endl;

    // Separate even and odd elements
    int even[a], odd[a];
    int evenCount = 0, oddCount = 0;

    for (int o = 0; o < a; o++)
    {
        if (arr[o] % 2 == 0)
        {
            even[evenCount] = arr[o];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[o];
            oddCount++;
        }
    }

    // Output even and odd arrays
    cout << "Even elements: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd elements: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;

    //square all numbers of the array
int u;
    for (int x = 0; x < a; x++)
    {
        u = arr[x]*arr[x];
        printf("The square of the array is %d\n",u);
    }

    return 0;
}
