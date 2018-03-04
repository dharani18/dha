using namespace std;

int main()
{

	int num, sum = 0;

	cout << "Enter number: ";
	cin >> num; 
	cout << endl;

	unsigned divisible = (num - num / 7 * 7 == 0);

	if (divisible == 1)
		cout << "yes" << endl;
			else
				cout <<"no" " << endl;
                 return 0;
		
		}

