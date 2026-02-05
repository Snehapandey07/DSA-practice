#include<iostream>
using namespace std;

int main() {
    // Declare a character array (C-style string) of size 50
    // This can hold up to 49 characters + 1 null terminator
    char str[50];

    // Prompt the user to enter a word
    cout << "Enter a word ";

    // Take input from the user and store it in str
    // Note: cin will stop reading at the first whitespace
    cin >> str;

    // Display the string stored in str
    cout << "\n str holds: " << str;

    // End of program
    return 0;
}
