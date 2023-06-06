#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> v;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j]==0){
                    v.push_back({i, j});
                }
            }
        }
        int r, c;
        for(auto i : v){
            r = i[0] , c= i[1];
            for(int k = 0; k < n; k++)matrix[k][c] =0;
            for(int k = 0; k < m; k++)matrix[r][k] =0;
        }
}