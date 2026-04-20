/* Problem Statement : Given an array arr 
of n integers, where arr[i] represents price of \
the stock on the ith day. Determine the maximum 
profit achievable by buying and selling the stock 
at most once. */
/*The stock should be purchased before selling it, and both actions cannot occur on the same day.*/

#include <iostream>
using namespace std;

int maxProfit(int prices[], int size) {
    int maxProfit = 0;
    int bestBuy = prices[0];

    for (int i = 1; i < size; i++) {
        if (prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;

    int result = maxProfit(prices, size);
    cout << "Maximum Profit = " << result << endl;

    return 0;
}
