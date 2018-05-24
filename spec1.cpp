#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string a;
    int i,count=0;
    getline(cin, a);
    for(i=0;i<a.length();i++)
    {
    if(a[i]>'0'&&a[i]<'9')
    {
        count++;
    }
}
cout<<count;
   return 0;
}
