#include <iostream>
using namespace std;

int main()
{
	int n,a,i;
	cin>>n;
	if((n>0)||(n<0))
	{
	for(i=1;i<=5;i++)
	{
		a=n*i;
		cout<<a<<" ";
	}
	}
	else
	{
		cout<<"invalid";
	}	
	return 0;
}
