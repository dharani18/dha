#include <iostream>
using namespace std;

int main()
{
   string s;
   int i;
   cout<<"Enter string :";
   getline(cin,s);
   cout<<"odd posi:";
   for(i=0;i<s.size();i++)
   {
       if(i%2==0)

      {
       cout<<s[i];

          }
        
   }
   cout<<" "<<endl;
   cout<<"even posi:";
   for(i=0;i<s.size();i++)
   {
       if(i%2!=0)
       {
           cout<<s[i];
       }
   }
    return 0;
}
