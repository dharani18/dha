#include <iostream>
using namespace std;
string is_isogram(string str)
{
    int len = str.length();
    for(int i=0; i<len; i++)
        str[i] = tolower(str[i]);
 
    sort(str.begin(), str.end());
 
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        return "False";
    }
    return "True";
}
int main () 
{
    string str1 = "Machine";
    cout << is_isogram(str1) << endl;
return 0;
}
