#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d=0;
    cin>>n>>a>>b;
    c=a;
    for(int i=0;i<n;i++)
{
    d=d+c;
    c=c+b;
}
cout<<d;
    return 0;
}
