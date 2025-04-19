#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int a, b, c;
    cout << "What is the number of elements you want in the array 1: " << endl;
    cin >> a;
    cout << "What is the number of elements you want in the array 2: " << endl;
    cin >> b;
    cout << "What is the number of elements you want in the array 3: " << endl;
    cin >> c;
    int arr1[a], arr2[b], arr3[c];
    for (int i = 0; i < a; i++)
    {
        cout << "Element " << i + 1 << endl;
        cin >> arr1[i];
    }
    for (int j = 0; j < b; j++)
    {
        cout << "Element " << j + 1 << endl;
        cin >> arr2[j];
    }
    for (int k = 0; k < c; k++)
    {
        cout << "Element " << k + 1 << endl;
        cin >> arr3[k];
    }

    unordered_map<int, int> hashing;

    // Traverse array 1-This loop iterates through each element of arr1 from index 0 to a-1 (where a is the size of arr1). For each element arr1[i], it stores 1 as the value in the hashing unordered_map with the key as the element arr1[i]. This step essentially marks each element of arr1 in the hashing map.
    for (int i = 0; i < a; i++)
    {
        hashing[arr1[i]] = 1;
    }
    // Traverse array 2-Similar to the first loop, this loop iterates through each element of arr2 from index 0 to b-1 (where b is the size of arr2). For each element arr2[i], it checks if arr2[i] exists in the hashing map. If it does, it updates its value to 2. This step marks each element of arr2 that is also present in arr1.
    for (int i = 0; i < b; i++)
    {
        int num = arr2[i];
        if (hashing.find(num) != hashing.end())
        {
            hashing[num] = 2;
        }
    }
    // Traverse array 3-This loop iterates through each element of arr3 from index 0 to c-1 (where c is the size of arr3). For each element arr3[i], it checks if arr3[i] exists in the hashing map and if its value is 2. If both conditions are met, it means the element is present in both arr1 and arr2, so it prints the element.
    for (int i = 0; i < c; i++)
    {
        int num = arr3[i];
        if (hashing.find(num) != hashing.end() && hashing[num] == 2)
        {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
