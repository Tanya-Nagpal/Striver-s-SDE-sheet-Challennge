#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int index = -1;

    for(int i = n-2; i >= 0; i--){
        if(permutation[i] < permutation[i+1]){
            index = i;
            break; 
        }
    }
    
    //if there is no break index
    if(index == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
    
    for(int i = n-1; i >= 0; i--){
        if(permutation[i] > permutation[index]){
            swap(permutation[index], permutation[i]);
            break;
        }
    }
    sort(permutation.begin() + index + 1, permutation.end()); //use reverse or sort function 
    return permutation;
  //Time Complexity = O(n log n);
  
  
  //Approach 2
    /*
    //At constant time
    next_permutation(permutation.begin(), permutation.end());
    return permutation;
    */
}
