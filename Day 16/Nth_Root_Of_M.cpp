double findNthRootOfM(int n, long long m) {
// Write your code here.
   double lo = 0.00, hi = m;
   long double k = 0.00;
   for(int j = 1 ; j<=100;j++)
   {
       double mid = (lo + hi) /2.00, ans = 1.00;
       
       for(int i = 1 ; i <= n; i++){
           ans *= mid ;
       }
       
       if(ans <= m){
           k = mid;
           lo = mid;
       }
       else
           hi = mid;
   }
   
   return k;
}