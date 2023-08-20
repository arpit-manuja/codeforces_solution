
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
   string s;
   cin>>s;
   
   char prev = 'a';
   int count =0;
   
   for(int i=0;i<s.length();i++)
   {
       int char_num = s[i]-96;
       
       
       int prev_num = prev-96;
       
       int rem = abs(char_num-prev_num);
       
       
       
       if(rem<=12)
       {
           count = count + rem;
       }
       else{
          
           if(prev_num>=14)
           {
               
              
           count = count + char_num +(26-prev_num);
           }
           else
              count = count + prev_num +(26-char_num);
           
           
       }

       
       prev = s[i];
       
       
   }
   cout<<count;
   
  
    return 0;
}
