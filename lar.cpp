#include<iostream>
using namespace std;

int main()
{
int i,n,x,large=0;

cout<<“How many numbers?”;
cin>>n;
for(i=0;i<n;++i)
{
cout<<“nEnter number “<<i+1<<“:”;
cin>>x;
if(x>large)
large=x;
}
cout<<“nnThe largest number is “<<large;
return 0;
}
