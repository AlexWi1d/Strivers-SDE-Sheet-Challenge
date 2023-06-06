#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long> > ans;
    // int n = numRows;
    for (int i = 0; i < n; i++)
    {
       vector<long long> v(i+1);
       ans.push_back(v);
       for (int j = 0; j < i+1; j++)
       {
           if (j == 0 || j == i)
           {
               ans[i][j] = 1;
           }
           else ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
       }
       
    }
        return ans;
}
