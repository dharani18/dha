#include<iostream>
using namespace std;
int main()
{
	int small, arr[50], size, i;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<" smallest element ...\n\n";
	small=arr[0];
	for(i=0; i<size; i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	cout<<"Smallest Element = "<<small;
	return 0;
}
