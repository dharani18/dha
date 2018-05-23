int main()
{
int b,p,c;
cin>>b>>p;
if((b>0)||(p=0))
{ 
	cout<<"1";
}
else if((b>0)||(p>0))
{
 c=pow(b,p);
 cout<<c;
 }
 else
 { 
 	cout<<"invalid:";
 }
 return 0;
}
