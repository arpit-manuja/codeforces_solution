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
    int n;
    cin>>n;
    int x;
    cin>>x;
    
    set<int> s;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
    
    int m;
    cin>>m;
    
     for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
    
    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
