
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
   int t;
   cin>>t;
   
   while(t--)
   {
       int x,y,z;
       
       cin>>x>>y>>z;
       
       int count = 1;
       
       while(1)
       {
           
           if(x%2!=0 && y%2!=0)
           {
              
               break;
           }
           if(x%2==0)
           {
               x = x/2;
           }
           else
           {
               y = y/2;
           }
           count = 2*count;
           
           
           
           
           
           
       }
       if(count>=z)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       
       
   }
   
   
  
    return 0;
}
