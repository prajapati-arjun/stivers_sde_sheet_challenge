#include<bits/stdc++.h>

vector<int> majorityElementII(vector<int> &a)

{

   // Write your code here.

   int element1=a[0];

   int element2=0;

   int count1=1;

   int count2=0;

   int n=a.size();

   for(int i=1;i<n;i++){

       if(a[i]==element1){

           count1++;

       }

       else if(a[i]==element2){

           count2++;

       }

       else if(count1==0){

           element1=a[i];

           count1=1;

       }

       else if(count2==0){

           element2=a[i];

           count2=1;

       }

       else{

           count1--;

           count2--;

       }

   }  

       vector<int> v;

       int ct1=0,ct2=0;

       for(int i=0;i<n;i++){

           if(a[i]==element1)

               ct1++;

           else if(a[i]==element2)

               ct2++;

       }

       if(ct1>floor(n/3))

           v.push_back(element1);

       if(ct2>floor(n/3))

           v.push_back(element2);

       sort(v.begin(),v.end());

       return v;

   
}
   

 