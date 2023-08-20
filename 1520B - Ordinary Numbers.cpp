
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
            
            string s = to_string(n);
            // cout<<s<<"--"<<endl;
            int count = (s.length()-1)*9 + ((s[0]-'0')-1);
            
            string s1(s.length(),s[0]);
            
            
            if(s>=s1)
            count++;
            
            

            cout<<count<<endl;
            
        }

    return 0;
}
