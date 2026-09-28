#include <bits/stdc++.h>
using namespace std;
/*Pattern 1- Binary search on answer */

/*ispossible pattern is also there*/
/* ~ Pattern A: Count how many resources are needed
Use when: Checking whether a capacity, speed, or time is sufficient.*/
bool isPossible(int mid) {
    int required = 0;
    for (int x : arr) {
        // Calculate resources needed using mid
    }
    return required <= limit;
}

/*~Pattern B: Greedy placement
Use when: Checking whether objects can be placed with a given minimum distance.*/
bool isPossible(int mid) {
    int count = 1;
    int lastPosition = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - lastPosition >= mid) {
            count++;
            lastPosition = arr[i];
        }
    }
    return count >= required;

/*Pattern C: Split into groupsUse when: Checking whether an array can be divided 
into a limited number of groups under a given maximum sum.*/
bool isPossible(int mid) {
    int groups = 1;
    int currentSum = 0;
    for (int x : arr) {
        if (currentSum + x > mid) {
            groups++;
            currentSum = 0;
        }
        currentSum += x;
    }
    return groups <= limit;
}

/*BS on answe: to find min valid answer*/
int binarySearchMin(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

/*BS on asnwer to find max valid answer*/
int binarySearchMax(int low, int high) {
    int ans = low;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}