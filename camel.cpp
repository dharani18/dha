#include<iostream>
using namespace std;
int main()
 { 
         int i;
         char a[30];
         cin.getline(a,30);  
         a[0]=a[0]-32;

         for(i=0;a[i]!='\0';i++)
        {
             if(a[i]==' ')
             {
                 a[i+1] = a[i+1]-32;
             }
       }

       cout<<a; 
       return 0;
 }
