#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int m)
{
      int n = nums.size();
        int idx = -1;
        for(int i = n-2; i >= 0; i--){
            if(nums[i]< nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){reverse(nums.begin(), nums.end());
         return nums;}
        for(int i = n-1; i >=0; i--){
            if(nums[i]>nums[idx]){swap(nums[i], nums[idx]); break;}
        }
        reverse(nums.begin()+idx+1, nums.end());
        return nums;
}