#include <iostream>

using namespace std;
class A
{public:
    int s;
 
 void get()
 {
 cout<<"enter s";
 cin>>s;
     if(s%4==0)
     cout<<"leap year";
     else
     cout<<"not leap year";
     }
};
int main()
{ 
    A a;
   a.get();
   return 0;
}
© 2018 GitHub, Inc.
