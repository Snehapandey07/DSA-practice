/* Date :17.02.26 */
/* Container with most water - Two Pointer Approach */

#include <iostream>
#include <algorithm>
using namespace std;

int maxWater(int height[], int n) {
    int lp = 0;
    int rp = n - 1;
    int maxWater = 0;

    while (lp < rp) {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;

        maxWater = max(maxWater, currWater);

        if (height[lp] < height[rp])
            lp++;
        else
            rp--;
    }
    return maxWater;
}

int main() {
    int height[] = {1,8,6,2,5,4,8,8,7};
    int n = sizeof(height) / sizeof(height[0]);

    int result = maxWater(height, n);
    cout << "Container with max water is: " << result;
    return 0;
}
