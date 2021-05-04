#include "STOCK.h"
#include <vector>

using namespace std;

int Stock::maxProfit(vector<int>& prices)
{
    int profit[2] = {0, -prices[0]};
    for(int i = 1; i < prices.size(); i++)
    {
        profit[0] = max(profit[0], profit[1] + prices[i]);
        profit[1] = max(profit[1], - prices[i]); //这里应该将profit[0] - prices[i]改为-prices[i]
    }

    return profit[0];
}

//买卖股票的最佳时机II
int Stock::maxProfit2(vector<int>& prices)
{
    int profit[2] = {0, -prices[0]};
    for(int i = 1; i < prices.size(); i++)
    {
        profit[0] = max(profit[0], profit[1] + prices[i]);
        profit[1] = max(profit[1], profit[0]- prices[i]); //这里应该将profit[0] - prices[i]改为-prices[i]
    }

    return profit[0];
}