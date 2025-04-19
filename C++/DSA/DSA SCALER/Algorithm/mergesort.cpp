#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    // Merge function inside main
    for (int size = 1; size < a; size *= 2) {
        for (int left = 0; left < a - size; left += 2 * size) {
            int mid = min(left + size - 1, a - 1);
            int right = min(left + 2 * size - 1, a - 1);

            int n1 = mid - left + 1;
            int n2 = right - mid;
            int L[n1], R[n2];

            // Copy data into temporary arrays
            for (int i = 0; i < n1; i++) L[i] = arr[left + i];
            for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

            int i = 0, j = 0, k = left;
            while (i < n1 && j < n2) {
                if (L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            // Copy remaining elements
            while (i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }
            while (j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }
    }

    // Output sorted array
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
