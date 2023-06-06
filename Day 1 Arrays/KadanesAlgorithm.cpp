#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max_sum = 0, curr_sum = 0; 
    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum<0)curr_sum =0;
    }
    return max_sum;
}