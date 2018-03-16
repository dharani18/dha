#include<iostream>
 
using namespace std;
 
int main()
{
    int i,k,sum=0;
    cout<<"How many numbers? ";
    cin>>k;
 
    for(i=1;i<=k;++i)
    {
        sum+=i;
    }
    
    cout<<"Sum="<<sum;
    return 0;
}
