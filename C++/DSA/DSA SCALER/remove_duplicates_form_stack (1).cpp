#include <iostream>
#include <stack>
using namespace std;

int main()
{
    std::stack<int> stack;

    cout << "How many elements do you want to add in the stack: " << endl;
    int n, k;
    cin >> n;
    int arr[n];

    // Input for stack
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << ": " << endl;
        cin >> k;
        stack.push(k);
        arr[i] = k;
    }

    // Check for duplicates
    int count = 0;
    while (!stack.empty())
    {
        int current = stack.top();
        stack.pop();


        std::stack<int> temp;
        while (!stack.empty())
        {
            int element = stack.top();
            stack.pop();

            // Check for duplicate
            if (element == current)
            {
                count++;
            }

            // Move elements back to the original stack
            temp.push(element);
        }

        // Move elements from temp back to stack
        while (!temp.empty())
        {
            stack.push(temp.top());
            temp.pop();
        }
    }

    if (count > 0)
    {
        cout << "Duplicates found." << endl;
    }
    else
    {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
