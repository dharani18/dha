#include<iostream>
using namespace std;
int main()
{
    long int num1,count=0;
    cout<<"Enter number to count it's Digit : ";
    cin>>num1;
    while(num1!=0)
    {
        num1=num1/10;
     count++;
    }
    cout<<"Number of Digit is : "<<count;
    return 0;
}
