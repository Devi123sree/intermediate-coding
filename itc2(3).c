#include <stdio.h>

void bestBuySellDays(int prices[], int n, int *buyDay, int *sellDay) {
    if (n < 2) {
        *buyDay = -1;
        *sellDay = -1;
        return;
    }

    int minPrice = prices[0];
    int minDay = 0;
    int maxProfit = 0;

    *buyDay = 0;
    *sellDay = 0;

    for (int day = 1; day < n; day++) {
        // Check if we get a better profit
        if (prices[day] - minPrice > maxProfit) {
            maxProfit = prices[day] - minPrice;
            *buyDay = minDay;
            *sellDay = day;
        }
        if (prices[day] < minPrice) {
            minPrice = prices[day];
            minDay = day;
        }
    }
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int buyDay, sellDay;

    bestBuySellDays(prices, n, &buyDay, &sellDay);

    if (buyDay != -1 && sellDay != -1)
        printf("Buy on day %d and sell on day %d\n", buyDay, sellDay);
    else
        printf("No profitable transactions possible\n");

    return 0;
}
