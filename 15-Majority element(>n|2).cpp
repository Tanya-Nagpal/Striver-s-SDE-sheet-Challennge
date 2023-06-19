#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int majorityElement =0, count=0;
    for(int i=0; i<n; i++)
    {
        if(count==0)
        {
            count=1;
            majorityElement = arr[i];
            continue;
        }
        if(majorityElement == arr[i])
            count++;
        else
            count--;
    }
    count= 0;
    for(int i=0; i<n; i++)
        if(majorityElement==arr[i])
            count++;
    return count>n/2 ? majorityElement : -1;
}
