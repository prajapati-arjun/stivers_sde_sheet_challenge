#include<bits/stdc++.h>
int kthLargest(vector<int>& ans, int size, int K)
{
   sort(ans.begin(),ans.end());
   return ans[size-K];
}