#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<pair<int, int>> v;
  int now = 0;
  int maxx = 0;
  for(int i=0;i<n;i++)
  {
      int x,y;
      cin>>x>>y;
      v.push_back({x, y});
  }
  for(int i=0;i<n;i++)
  {
      now = now - v[i].first;
      now = now + v[i].second;
      
      maxx = max(maxx , now);
  }
  
  cout<<maxx;
  
}
