#include <iostream>
using namespace std;
int main()

{

    int num,num2;
    char op;
    
    while(cin>>num>>op>>num2)
    
    {
        if(op=='/')
        
        {
            cout<<"division operation:"<<num/num2;
        }
        
        if(op=='%')
        
        {
            cout<<"mod operation :"<<num%num2;
        }
        
    }

    return 0;
}
