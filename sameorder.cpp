#include<iostream>
using namespace std;
int main()
  {
    string S;
  
int N;
cout<<"Enter the string : "<<endl;
cin>>S;
cout<<"Enter the N value : "<<endl;
cin>>N;
if(N<S.length())
cout<<S.substr(S.length()-N)<<endl;
else
cout<<"Not enough characters"<<endl;
return 0;
}
