/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   long long x , y;
   cin>>x>>y;
    long long mid = (x+1)/2;
    
    if(y<=mid)
    {
        cout<<((y-1)*2+1);
    }
    else
    {
        cout<<((y-mid)*2);
    }

    return 0;
}
