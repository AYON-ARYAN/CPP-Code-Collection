#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    stack<int> stack;
    queue<int> queue;
    int a, b, c;

    cout << "How many elements you want in the queue" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "Enter elenment " << i + 1 << endl;
        cin >> b;
        queue.push(b);
    }

    while (!queue.empty())
    {
        stack.push(queue.front());
        queue.pop();
    }
    while (!stack.empty())
    {
       cout<< stack.top()<<endl;
            stack.pop();
    }

    return 0;
}