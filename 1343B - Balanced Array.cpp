
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    int x = n/2;
    if(x%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
   
    
    cout<<"YES"<<endl;
    int sum = 0;
    for(int i=1;i<=x;i++)
    {
       
        cout<<2*i<<" ";
        sum = sum + 2*i;
    }
    
    for(int i=1;i<=x-1;i++)
    {
        cout<<2*i-1<<" ";
        sum = sum - (2*i-1);
        
    }
    cout<<sum<<endl;
}


int main()
{
   
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            
            fun(n);
        }

    return 0;
}
