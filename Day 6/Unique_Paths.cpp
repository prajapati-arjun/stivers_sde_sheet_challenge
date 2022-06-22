#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
    int a=1;
    for(int i=1;i<=n-1;i++)
    {
        a=(a*(m+i-1))/i;
    }
    return a;
}