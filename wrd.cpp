#include<iostream>
using namespace std;
int main()
{
	char strs[100], countw=0, strw[15], i;
	cout<<"enter sentence : ";
	gets(strs);
	int len=strlen(strs);
	for(i=0; i<len; i++)
	{
		if(strs[i]==' ')
		{
			countw++;
		}
	}
	cout<<"number of words is "<<countw+1;
	return 0;
}
