#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    long lmax=0,rmax=0;
    
   int i=0,j=n-1;
    long sum=0;
    
    while(i<j){
        lmax=max(lmax,arr[i]);
        rmax=max(rmax,arr[j]);
            
        if(lmax<rmax){
            sum+=(lmax-arr[i]);
            i++;
        }else{
            sum+=(rmax-arr[j]);
            j--;
        }
    }
    return sum;
}