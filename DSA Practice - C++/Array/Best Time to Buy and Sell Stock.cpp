#include <iostream>
#include <vector>
using namespace std;

// LeetCode 121: Best Time to Buy and Sell Stock
// Time Complexity: O(n)
// Space Complexity: O(1)

int maxProfit(vector<int>& prices) {

    int minPrice = prices[0];   // buy price
    int maxProfit = 0;          // maximum profit

    for (int i = 1; i < prices.size(); i++) {

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
    return 0;
}
