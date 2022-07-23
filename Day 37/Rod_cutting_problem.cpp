int dp[105];
int solve(int rem,vector<int> &price,int n){
    if(rem == 0)
        return 0;
    if(dp[rem] != -1)
        return dp[rem];
    int cost = 0;
         for(int i = 1;i<=n;i++){
             if(rem - i >= 0  )
                 cost = max(cost, price[i-1] + solve(rem - i,price,n)) ;
         }
    return dp[rem] = cost;
}
int cutRod(vector<int> &price, int n)
{
    for(int i = 0;i<=n;i++)
        dp[i] = -1;
    return solve(n,price,n);
}
