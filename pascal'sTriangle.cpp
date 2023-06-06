#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  for(int row = 0; row < n; row++){
    vector<long long int> ansRow(row + 1, 1);
    for(int col = 1; col < row; col++){
      ansRow[col] = ans[row - 1][col - 1] + ans[row - 1][col];
    }
    ans.push_back(ansRow);
  }
  return ans;
}

// Time Complexity = O(n^3);
