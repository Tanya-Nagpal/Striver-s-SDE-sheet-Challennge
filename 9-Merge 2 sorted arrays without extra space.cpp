#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    
    //Brute Force
	vector<int> arr3;
    int left = 0, right = 0;
    while (left < m && right < n) {
        if (arr1[left] < arr2[right]) {
            arr3.push_back(arr1[left++]);
        } else {
            arr3.push_back(arr2[right++]);
        }
    }
    while (left < m) {
        arr3.push_back(arr1[left++]);
    }
    while (right < n) {
      arr3.push_back(arr2[right++]);
    }
    return arr3;
    
    /* Optimal Approach
    int left = m - 1;
    int right = 0;
    while(left>=0 && right<n){
        if(arr1[left] > arr2[right]){
            swawp(arr1[left], arr2[right]);
            left--, right++;
        }else break;
        sort(arr1, arr1+m);
        sort(arr2, arr2+n);
    }
   // TC = O(min(m,n)) + O(nlogn) + O(mlogm), SC = O(1);
    */
}
