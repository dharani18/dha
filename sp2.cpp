#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string s;
    int i,c=0;
    getline(cin, s);
    for(i=0;i<s.length();i++)
    {
    if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {
        continue;
    }
    else
    {
        c++;
    }
}
cout<<c;
   return 0;
}
