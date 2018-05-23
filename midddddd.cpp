#include <iostream>
using namespace std;

int main() 
{
	int n1,n2,i;
	cin>>n1>>n2;
            if((n1>0 || n2>0)||(n1<0) ||(n2<0))
            {
	n1++;
	for(i=n1;i<n2;i++)
	{
	if(i%2==0)
	{
	        cout<<i;
	        break;
	     }
	     
	
            }
            
            }
            else	
	{
		cout<<"invalid";
	}
	return 0;
}
