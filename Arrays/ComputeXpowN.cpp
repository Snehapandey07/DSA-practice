/* Date : 31.01.26 */
/* To compute x^n using Binary Exponentiation */
/*
#include <iostream>
using namespace std;

double findPow(double x, int n) {

    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;

    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;

    long binform = n;
    if (binform < 0) {
        x = 1 / x;
        binform = -binform;
    }

    double ans = 1.0;
    while (binform > 0) {
        if (binform % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main() {
    double x = 7;
    int n = 5;

    double result = findPow(x, n);
    cout << x << " to the power " << n << " is " << result;

    return 0;
}  

*/

/* Different approach : 17.09.26 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findpow(double x, int n) {

        double ans = 1.0;
        long long nn = n;

        if (nn < 0) {
            nn = -nn;
        }

        while (nn > 0) {
            if (nn % 2 == 1) {
                ans = ans * x;
                nn = nn - 1;
            }
            else {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};

int main() {
    Solution s;
    double x = 2;
    int n = 10;
    double res = s.findpow(x, n);
    cout << "Answer : " << res;
    return 0;
}
