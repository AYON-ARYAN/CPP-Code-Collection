#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number of elements you want in the array: ";
    cin >> a;

    int arr[a];

    // Enter the elements
    for (int i = 0; i < a; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print the entered elements
    cout << "Entered elements are: ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    // Square the elements
    cout << "\nThe square of elements are: ";
    for (int o = 0; o < a; o++)
    {
        cout << arr[o] * arr[o] << " ";
    }

    // Calculate the average of the array
    int sum = 0;
    for (int y = 0; y < a; y++)
    {
        sum += arr[y];
    }
    int average = (sum) / a;
    cout << "\nThe average is " << average << endl;

    // Sum of the array
    cout << "The sum of the array is " << sum << endl;

    // Deletion of an element from the array
    int del;
    cout << "Enter the index of the element to delete: ";
    cin >> del;

    if (del >= 0 && del < a)
    {

        for (int i = del; i < a - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }

        --a;

        cout << "Array after deletion: ";
        for (int i = 0; i < a; ++i)
        {
            cout << arr[i] << " ";
        }
    }

    // Add elements to the array
    int l;
    cout << "\nEnter the number of elements you want to add to the array: ";
    cin >> l;

    if (l > 0)
    {
        for (int b = a; b < a + l; b++)
        {
            cout << "Enter element " << b + 1 << ": ";
            cin >> arr[b];
        }

        // Update the size of the array
        a += l;

        // Display the modified array after addition
        cout << "Array after addition: ";
        for (int i = 0; i < a; ++i)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid number of elements to add." << endl;
    }
    // If the numbers are repeated
    int hj = 0;
    int jj;
    for (int yt = 0; yt < a; yt++)
    {
        hj = arr[yt];
        if (arr[yt] == hj)
        {
            jj++;
        }
        else
        {
            jj--;
        }
    }
    if (jj == 1)
    {
        cout << "The numbers are repeated" << endl;
    }
    else
    {
        cout << "No,it is not repeated";
    }
    // Scerch elements of the array
    int search;
    cout << "\nEnter the element you want to search: ";
    cin >> search;

    bool found = false;
    for (int ej = 0; ej < a; ej++)
    {
        if (arr[ej] == search)
        {
            found = true;
            cout << "Element " << search << " found at index " << ej << endl;
            break; // Exit the loop once the element is found
        }
    }

    if (!found)
    {
        cout << "Element " << search << " not found in the array." << endl;
    }
    return 0;
}
