#include <iostream>

using namespace std;
class A
{
    public:
     void display(int n)
     {
     if(n>0)
     cout<<"positive";
     else
     cout<<"negative";
     }
};
int main()
{
A a;
a.display(2);
}
