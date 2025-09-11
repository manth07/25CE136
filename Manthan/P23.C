#include <stdio.h>

int main() {

    int prices[] = {100, 180, 260,310, 40, 535,695};
    int n = sizeof(prices) / sizeof(prices[0]);  // Size of the array

    // Initialize minPrice and maxProfit
    int minPrice = prices[0];  // Start with the first price as the minimum price
    int maxProfit = 0;  // Start with 0 profit, no transactions yet

    printf("Starting minPrice: %d\n", minPrice);  // Debugging output

    // Loop through the prices array starting from the second day
    for (int i = 1; i < n; i++) {
        // Calculate the potential profit if sold on the current day
        int profit = prices[i] - minPrice;

        // Debugging output: print current price, min price, and profit
        printf("Day %d: Price = %d, minPrice = %d, Profit = %d\n", i + 1, prices[i], minPrice, profit);

        // If the current profit is greater than maxProfit, update maxProfit
        if (profit > maxProfit) {
            maxProfit = profit;
        }

        // Update minPrice if a lower price is found
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    // Output the result: maximum profit
    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}

