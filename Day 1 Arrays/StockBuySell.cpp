#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int least_value = INT_MAX;
       int profit = 0;
        for(auto x : prices){
            least_value = min(least_value, x);
            int temp = x -least_value;
            profit = max(temp, profit);
        }
        return profit;
}