
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
   int t;
   cin>>t;
   
   while(t--)
   {
       int n;
       cin>>n;
        
        vector<int> v(n , 0);
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            
            if(v[i]%2==0)
            even++;
            else
            odd++;
        }
        
        
        if(odd==0 || (odd==n && n%2==0))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
        
        
        
       
       
   }
   
   
  
    return 0;
}
