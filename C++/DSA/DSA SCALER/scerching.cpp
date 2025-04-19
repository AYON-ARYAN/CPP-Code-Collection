#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements you want in the array: ";
    cin >> a;
    
    int arr[a];
    for (int i = 0; i < a; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Sorting the array for binary search
    sort(arr, arr + a);

    // Binary search
    int left = 0;
    int right = a - 1;
    int found = -1;

    cout << "Enter the element you want to search for: ";
    int y;
    cin >> y;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == y) {
            found = mid;
            break;
        } else if (arr[mid] < y) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1) {
        cout << "Element found at index: " << found << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
