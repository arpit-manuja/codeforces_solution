
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
   
        int n, k, l, c, d, p, nl, np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        
        int max_drink = (k*l)/nl;
        int salt = p/np;
        int lemon = c*d;
        
        cout<<min(max_drink , min(salt , lemon))/n;

    return 0;
}
