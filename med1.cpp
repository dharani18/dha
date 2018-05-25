#include<iostream>
using namespace std;

int main()
{
int n,i,j,t,med;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    if(n%2==0)
    {
        med=(a[n-1/2]+a[n/2])/2;
        
    }
    else
    med=a[n/2];
    
}
cout<<med;
return 0;
}

