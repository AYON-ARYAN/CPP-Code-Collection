#include <iostream>
#include <algorithm>

int main() {
    int seats[] = {2, 3, 5, 7}; // Array representing vacant seats in each row
    int n = sizeof(seats) / sizeof(seats[0]); // Number of elements in seats array
    int b = 10; // Number of people to sell tickets to
    long long profit = 0;

    std::sort(seats, seats + n); // Sort seats in non-decreasing order

    for (int i = 0; i < n && b > 0; ++i) {
        int sold = std::min(b, seats[i]); // Sell min(b, seats[i]) tickets in this row
        profit += static_cast<long long>(sold) * seats[i]; // Update profit
        b -= sold; // Update remaining tickets
    }

    std::cout << "Maximum Profit: " << profit << std::endl;

    return 0;
}
