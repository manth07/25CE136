
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d",&n);
    int prices[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter price on day %d: ",i+1);
        scanf("%d",&prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    printf("Starting minPrice: %d\n", minPrice);

    for (int i = 1; i < n; i++)
        {

        int profit = prices[i] - minPrice;

        printf("Day %d: Price = %d, minPrice = %d, Profit = %d\n", i + 1, prices[i], minPrice, profit);

        if (profit > maxProfit)
            {
                maxProfit = profit;
            }

        if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
        }

    printf("Maximum Profit: %d\n", maxProfit);
    printf("\nName: Manthan Vasoya\n");
    printf("ID: 25CE136");
    return 0;
}

