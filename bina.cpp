#include<stdio.h>
using namespace std;
int main()
 {
     int num;
     cout<<"enter number:";
     cin>>num;
     int testBinary(int number)
     {
         int dv;
         while(number!=0)
         {
         dv=number%10;
         if(dv>1)
         return no;
         number=number/10;
         }
         return yes;
     }
     return 0;
     
 }
