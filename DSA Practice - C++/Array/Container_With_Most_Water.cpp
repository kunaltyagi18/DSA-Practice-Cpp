#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LeetCode 11: Container With Most Water
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxArea(vector<int>& height) {
    int maxWater = 0;        // answer
    int lp = 0;              // left pointer
    int rp = height.size() - 1; // right pointer

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;

        maxWater = max(maxWater, currWater);

        if (height[lp] < height[rp])
            lp++;
        else
            rp--;
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}
