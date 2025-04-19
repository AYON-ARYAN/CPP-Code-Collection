#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number of elements you want to enter in the array";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Element " << i;
        cin >> arr[i];
    }
    // bubble sort(decending)
    for (int p = 0; p < a; p++)
    {
        for (int i = 0; i < p + 1; i++)
        {
            if (arr[p]>arr[i])//change < for assending
            {
                int temp = arr[p];
                arr[p] = arr[i];
                arr[i] = temp;
            }
            
        }
    }
    //output
    for (int m = 0; m < a; m++)
    {
        cout << arr[m] << " ";
    }
    

    return 0;
}