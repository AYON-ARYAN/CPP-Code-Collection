#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    int arr[num];//input in the array
    for (int i = 0; i < num; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Binary search starts
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int left = 0;        // the value of left always gets changed at the end of the loop
    int right = num - 1; // the value of right always gets chaned at the end of the loop
    int foundIndex = -1; // if the index is not found it acts as the error code at last
    // mid is calculated as (left + right) / 2, which gives us the index halfway between left and right.
    // we update right to mid - 1,
    while (left <= right)                    // the contents inside this loop acts as the recursive func. always repeating it self
    {                                        // THIS LOOP WILL ITERATE TILL THE LEFT SIDE IS LESS THAN OR EQUAL TO THE RIGHT SIDE
        int mid = left + (right - left) / 2; // this logic is to handle the mid element in any case
        if (arr[mid] == target)
        {                     // this shows the first condition if the mid element is equal to the target then return its index, even if it's not sorted.
            foundIndex = mid; // found in first try
            break;            // it stops the loop if the indexis found in the first try
        }
        else if (arr[mid] < target)
        { // if it is less than the target then return its index
            left = mid + 1;
        }
        else
        { // else  if it is greater than the target then return its index, even if it is not the first element//next time we will check from next position//is not the exact element but next one will be sure to find the element
            right = mid - 1;
        }
    }

    if (foundIndex != -1) // i told you in the starting
    {
        cout << "Element found at index " << foundIndex << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
