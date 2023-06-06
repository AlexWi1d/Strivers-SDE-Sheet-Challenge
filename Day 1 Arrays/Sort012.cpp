#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
      int cnt1(0), cnt2(0), cnt3(0);
        for(int i = 0; i < n; i++){
            if(nums[i]==0)cnt1++;
            else if(nums[i]==1)cnt2++;
            else cnt3++;
        }
        for(int i = 0; i <n; i++){
            if(cnt1){
                nums[i] = 0;
                cnt1--;
            }
            else if(cnt2){
                nums[i] = 1;
                cnt2--;
            }else nums[i] = 2;
        }
}