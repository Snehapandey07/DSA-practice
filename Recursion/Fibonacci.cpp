// Date: 23-02-2026
// Program: Find Fibonacci number using recursion
// Time Complexity = O(2^n) and space complexity = O(n)

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;

    cout << "Enter the position (n): ";
    cin >> number;

    if (number < 0) {
        cout << "Invalid input! Please enter a non-negative number." << endl;
    } 
    else {
        cout << "Fibonacci number at position " 
             << number << " is: " 
             << fibonacci(number) << endl;
    }

    return 0;
}