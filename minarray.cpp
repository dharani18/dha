#include <iostream>
using namespace std;

int main()
{
 int n,i;
 float array[100];
 cin>>n;
 if((n>0)||(n<0))
 {
 for(i=0;i<n;i++)
 { 
           cin>>array[i];
 }
 for(i=1;i<n;i++)
 {
 	if(array[0]>array[i])
            array[0]=array[i];
 }
 cout<<"smallest element="<<array[0];
 }

 else
 { 
 	cout<<"invalid";
 }
 return 0;
}
