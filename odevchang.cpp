#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
int main()
.
string encodeString(string str)
{
    int Even[MAX_CHAR] = {0};
    int Odd[MAX_CHAR] = {0};
    for (int i=0; i<str.length(); i++)
    {
        char c = str[i];
        if (i&1)
           Odd[c-'a']++;
        else
           Even[c-'a']++;
    } 
    string encoding = "";
    for (int i=0; i<MAX_CHAR; i++)
    {
       encoding += to_string(Even[i]);
       encoding += to_string('-');
       encoding += to_string(Odd[i]);
       encoding += to_string('-');
    }
    return encoding;
}
