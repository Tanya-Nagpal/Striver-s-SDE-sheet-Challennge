#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m = matrix.size();
	int n = matrix[0].size();
	//row and col, are initialized to store the indices of rows and columns that contain at least one zero element.
	set<int>row, col;

	//The nested loop iterates over each element of the matrix using the variables i and j as indices. If an element at position (i, j) is zero, the row index i is inserted into the row set, and the column index j is inserted into the col set.
	for(int i = 0; i<m; i++){
		for(int j=0; j<n; j++){
			if(matrix[i][j]==0){
				row.insert(i);
				col.insert(j);
			}
		}
	}

	//iterates over each row index i in the row set. For each row, it sets all elements in that row to zero by iterating over the columns j from 0 to n-1 and setting matrix[i][j] to 0.
	for(int i:row){
        for(int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }
	// iterates over each column index j in the col set. For each column, it sets all elements in that column to zero by iterating over the rows i from 0 to m-1 and setting matrix[i][j] to 0.
    for(int j:col){
        for(int i=0;i<m;i++){
            matrix[i][j]=0;
            }
        }
}
//TC = O(m*n)
