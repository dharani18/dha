#include<stdio>
using namespace std;
int main()
{
 char str[100],temp;
 int i,j=0;
 clrscr();
 cout<<"Enter any the string :";
 gets(str); 
 i=0;
 j=strlen(str)-1;
  while(i<j)
   {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse is: "<<str;
 return 0;
}
