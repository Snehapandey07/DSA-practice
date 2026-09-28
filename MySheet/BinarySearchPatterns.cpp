#include <bits/stdc++.h>
using namespace std;

/*# PATTERN 1 — BINARY SEARCH ON ANSWER*/
/*A. Minimum Valid Answer*/
int binarySearchMin(int low, int high) {
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(mid)) {
            ans = mid;
            high = mid - 1;       // Search left
        }
        else {
            low = mid + 1;        // Search right
        }
    }
    return ans;
}
/* B. Maximum Valid Answer*/
int binarySearchMax(int low, int high) {
    int ans = low;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(mid)) {
            ans = mid;
            low = mid + 1;        // Search right
        }
        else {
            high = mid - 1;       // Search left
        }
    }
    return ans;
}

/*# PATTERN 2 — isPossible() CHECKING PATTERNS*/
// A. Resource Counting - Check whether a speed, capacity, or time is sufficient
bool isPossible(int mid, vector<int>& arr, int limit) {
    int required = 0;
    for (int x : arr) {
        // Calculate resources needed using mid
    }
    return required <= limit;
}

//B. Greedy Placement
// Check whether objects can be placed
// with at least 'mid' distance

bool canPlace(vector<int>& arr, int mid, int required) {
    int count = 1;
    int lastPosition = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - lastPosition >= mid) {
            count++;
            lastPosition = arr[i];
        }
    }

    return count >= required;
}

//C. Split Array into Groups
// Check whether an array can be split
// into at most 'limit' groups with sum <= mid
bool canSplit(vector<int>& arr, int mid, int limit) {
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

//# PATTERN 3 — FIRST OCCURRENCE
// Find the first index of target
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

//# PATTERN 4 — LAST OCCURRENCE
// Find the last index of target

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
//# PATTERN 5 — FIRST TRUE / BOUNDARY SEARCH
// Find the first position where condition becomes true
// Assumption: false -> false -> true -> true

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

//# PATTERN 6 — SEARCH IN ROTATED SORTED ARRAY
// Search in a rotated sorted array
// Assumes distinct elements

int searchRotated(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
//# PATTERN 7 — STANDARD BINARY SEARCH
// Find target in a sorted array

int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


/*QUICK REVISION

| Pattern                 | Purpose                             |
| ----------------------- | ----------------------------------- |
| Binary Search on Answer | Find minimum / maximum valid answer |
| Resource Counting       | Check speed, capacity, or time      |
| Greedy Placement        | Check minimum distance              |
| Split into Groups       | Check maximum allowed sum           |
| First Occurrence        | Find first target index             |
| Last Occurrence         | Find last target index              |
| First True              | Find first valid position           |
| Rotated Search          | Search in rotated sorted array      |
| Standard Search         | Find target in sorted array         |

TIME COMPLEXITY

* Standard Binary Search: O(log n)
* First / Last Occurrence: O(log n)
* First True: O(log n)
* Rotated Search: O(log n)
* Binary Search on Answer: O(log R × C)

`R` = search range, `C` = cost of checking one candidate. */
