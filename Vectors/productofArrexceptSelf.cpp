#include <iostream>
using namespace std;

void productExceptSelf(int nums[], int size, int ans[]) {
    ans[0] = 1;

    // Prefix product
    for (int i = 1; i < size; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Suffix product
    int suffix = 1;
    for (int i = size-1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }
}

int main() {
    int nums[4] = {1,2,3,4};
    int size = 4;
    int ans[4];

    productExceptSelf(nums, size, ans);

    for (int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
