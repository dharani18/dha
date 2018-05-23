#include <iostream>
using namespace std;
int main() 
{  
	int n,a;
	cin>>n;
	 if((n<0)||(n>0))
     
     { 
     	
     
	if(n%2==0)
               
                   	{
                          
	 	  a=n/2;
	 	  cout<<a;
	             }
          else
                     { 
     	           cout<<n;
                      }
     }
     else
     cout<<"Invalid";
    
   return 0;
     }
