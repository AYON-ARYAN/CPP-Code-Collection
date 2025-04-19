#include <iostream>
#include <unordered_map> //library ofr hashing

int main()
{
    int a;
    int repeated_num = -1;
    // input
    std::cout << "How many elements you want in the array: " << std::endl;
    std::cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        std::cout << "Enter element[" << i + 1 << "]: ";
        std::cin >> arr[i];
    }

    int smallest_index = a;               // a vartiable which gets updTED when needed
    std::unordered_map<int, int> hashing; // how? to declare hashing function

    for (int j = 0; j < a; j++)
    {
        if (hashing.find(arr[j]) == hashing.end()) // dont ask hoqw this finds just rmember it

        {
            hashing[arr[j]] = j; // it saves the number with the index
        }
        else
        {
            if (j < smallest_index)
            {
                smallest_index = j;    // it stores the smallest index
                repeated_num = arr[j]; // it stores the smallest number
            }
        }
    }

    if (repeated_num != -1)
    {
        std::cout << "The repeated number is: " << repeated_num << std::endl
                  << "Repeated index is: " << smallest_index << std::endl;
    }
    else
    {
        std::cout << "No repeated number found" << std::endl;
    }

    return 0;
}
