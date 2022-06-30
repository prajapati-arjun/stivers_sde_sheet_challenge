int findMinimumCoins(int amount) 
{
    int cnt = 0;
    int n = 9;
    int den[9] = {1,2,5,10,20,50,100,500,1000};
    
    for(int i = n-1; i>=0; i--){
        
        while(amount>=den[i]){
            amount-=den[i];
            cnt++;
        }
    }
    return cnt;
}
