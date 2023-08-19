
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  vector<vector<char>> v(n , vector<char>(m , '#'));
  bool side = true;
  for(int i=1;i<n;i=i+2)
  {
      if(side)
      {
          for(int j=0;j<m-1;j++)
          {
              v[i][j]='.';
          }
          side = false;
      }
      else
      {
          for(int j=m-1;j>=1;j--)
          {
              v[i][j]='.';
          }
          side = true;
          
      }
  }
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cout<<v[i][j];
     }
     cout<<endl;
 }
  
}
