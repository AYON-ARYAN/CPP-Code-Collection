#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    cout << "How many elements do you want to add to the queue: " << endl;
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << ": ";
        cin >> k;
        q.push(k);
    }

    cout << "Elements in the queue:" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
