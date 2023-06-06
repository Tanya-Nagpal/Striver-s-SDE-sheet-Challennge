#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Input is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = 0, maxi = LONG_MIN;
    for(int i = 0 ; i < n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    if(maxi < 0 ){
        return 0;
    }
    return maxi;
}
//Time Complexity = O(n);
