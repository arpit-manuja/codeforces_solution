/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int w,x,y,z,n;
  cin>>w>>x>>y>>z>>n;
  set<int> s;
  
    int i=1;
    
    while(w*(i)<=n)
    {
       
       s.insert(w*(i++));
    }

    i=1;
      while(x*(i)<=n)
    {
       s.insert(x*(i++));
    }
      i=1;
      while(y*(i)<=n)
    {
       
        s.insert(y*(i++));
    }
       i=1;
      while(z*(i)<=n)
    {
       
         s.insert(z*(i++));
    }
    cout<<s.size();
}
