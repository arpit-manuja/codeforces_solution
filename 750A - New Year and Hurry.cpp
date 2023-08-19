
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n , k;
  cin>>n>>k;
  int rem = 240-k;
  
  int j=1;
  int sum =0;
  
  for(int i=1;i<=n;i++)
  {
      sum = sum + 5*i;
      if(sum>rem)
      {
          cout<<i-1;
          return 0;
      }
  }
  cout<<n;
  
}
