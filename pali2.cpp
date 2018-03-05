using namespace std;
int main()
{
		int count = 0;
		int length;
		string word;
		char x, c;
		cout << " enter a word\n";
		getline(cin, word);
		length = word.length() + 1;
	
		char  * arr = new char[length];
		
		strcpy(arr, word.c_str());
		
		Stack palindrome(length);

	while(count <= (length - 1))
	{
		c = arr[count];
		palindrome.push(c);
		count++;
	}
	
	count = 0;
	while(count <= (length - 1))
	{
			palindrome.pop(x);
			if(x != arr[count])
			{
				cout << "no";
				return 0 ;
			}
			count++;
		}
