//Program to Best Time to Buy and Sell Stock II
//Created by Aryan
//Created on 19/09/2021

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int net_profit=0;
        for(int i=1;i<prices.size();i++)
            if(prices[i]>prices[i-1])
                net_profit+=(prices[i]-prices[i-1]);
        return net_profit;
    }
};
