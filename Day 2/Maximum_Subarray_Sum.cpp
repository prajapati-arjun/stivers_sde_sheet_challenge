#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxsum = 0;
    long long cursum = 0;
    
    for(int i = 0; i< n; i++){
        cursum +=arr[i];
        
        if(cursum>maxsum){
            maxsum = cursum;
        }
        
        if(cursum<0){
            cursum = 0;
        }
    }
    return maxsum;
}