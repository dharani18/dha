#include <iostream>
using namespace std;

int main()
{
	int count, num, lar;
	count = 1;
  cin >> lar;

	while ( count < 10 ) 
	{
	cin >> num;

		if ( num > lar )
			lar = num;
		count++;
	}

	cout << "The largest number : " << lar << endl;
  return 0;
}
