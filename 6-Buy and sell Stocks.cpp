#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int minPrice = INT_MAX;
    int profit = 0;
    for(int i=0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i] - minPrice );
    }
    return profit;
}
//TC = O(n), SC = O(1)
