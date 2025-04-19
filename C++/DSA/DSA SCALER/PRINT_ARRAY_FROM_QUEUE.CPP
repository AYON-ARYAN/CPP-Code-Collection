#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements you want in the array:" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << endl;
        cin >> arr[i];
    }

    // Declare a queue and push array elements into it
    queue<int> myQueue;
    for (int i = 0; i < n; i++)
    {
        myQueue.push(arr[i]);
    }

    queue<int> new_queue = myQueue;
    while (!new_queue.empty())
    {
        cout << new_queue.front() << " ";
        new_queue.pop();
    }
    cout << endl;

    return 0;
}
