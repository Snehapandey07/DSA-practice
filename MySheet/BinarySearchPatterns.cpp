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

/*Pattern 2 - Find occurences / first valid positions */
int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            if (arr[mid] == target)
                ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

/*Patterrn 3-  last occurence*/
int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            if (arr[mid] == target)
                ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}
/*Pattern 4 - Find boundary using condition*/
int firstTrue(int low, int high) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (condition(mid))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

/*Pattern 5 - Search in rotated sorted array */
int searchRotated(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}