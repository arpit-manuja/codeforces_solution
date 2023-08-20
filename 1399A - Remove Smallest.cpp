
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> v)
{
    sort(v.begin() , v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1]-v[i]>1)
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n , 0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(fun(v))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }

    return 0;
}
