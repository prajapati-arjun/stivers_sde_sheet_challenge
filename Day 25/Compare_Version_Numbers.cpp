
#include<bits/stdc++.h>
int compareVersions(string a, string b) 
{
   int n=a.length();
    int m=b.length();
    
    vector<string> aa,bb;
    
    string temp="";
    
    for(int i=0;i<n;i++)
    {
        if(a[i]=='.')
        {
            aa.push_back(temp);
            temp="";
        }            
        
        else
            temp+=a[i];
    }
    aa.push_back(temp);
    
    temp="";
    
    for(int i=0;i<m;i++)
    {
        if(b[i]=='.')
        {
            bb.push_back(temp);
            temp="";
        }
                  
        else
            temp+=b[i];
    }
    bb.push_back(temp);
    
    n=aa.size();
    m=bb.size();
    
    if(n < m)
    {
        for(int i=n;i<m;i++)
            aa.push_back("0");
    }
    
    else if(m < n)
    {
        for(int i=m;i<n;i++)
            bb.push_back("0");
    }
    
    for(int i=0;i<max(n,m);i++)
    {
        if(aa[i] < bb[i])
            return -1;
        
        else if(aa[i] > bb[i])
            return 1;
    }
    return 0;
}