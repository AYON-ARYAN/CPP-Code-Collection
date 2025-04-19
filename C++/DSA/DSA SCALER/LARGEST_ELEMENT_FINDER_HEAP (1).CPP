#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "What is number of elements you want in the array: ";
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cout << "Enter element " << i + 1 << " :";
        cin>>arr[i];
    }
    // declareing the heap as priority queue
    std::priority_queue<int> pq;
    for (int j = 0; j < a; j++)
    {
        pq.push(arr[j]);
    }
    cout << "Largest Element in the arrray is: " << pq.top();

    return 0;
}