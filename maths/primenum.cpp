#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Not prime";
            return 0;   // stop as soon as a factor is found
        }
        // else if (n<=1){
        //     cout <<" Not Prime";
        // }
        // else {
        //     cout << " Not prime ";
        // }
    }

    cout << "Prime";
    return 0;
}
 