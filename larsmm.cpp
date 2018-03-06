#include <iostream>
using namespace std;
int main ()
{
	int max=0,num,min=0;
	for (int i=0; num!=-1; i++)
	{
		cout<<"Enter the number <-1 to end input> ";
		cin>>num;
		if (num>max)
			max=num;
		if (num<min)
			min=num;
	}
		cout<<"largest number is: "<<max << endl;
		cout<<"smallest number is: "<<min << endl;
	return 0;
}
