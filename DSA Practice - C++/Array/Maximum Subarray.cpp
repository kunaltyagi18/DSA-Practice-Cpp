#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// LeetCode 53: Maximum Subarray
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxSubArray(vector<int>& nums) {

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int val : nums) {
        currSum += val;
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums);

    return 0;
}
