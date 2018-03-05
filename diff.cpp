#include<iostream>
using namespace std;
int main()
bool canChange(std::string const& strA, std::string const& strB, char& letter)
{
    int dif = 0;
    int position = 0;
    int currentSize = (int)strA.size();
    if(currentSize != (int)strB.size())
    {
        return no;
    }
    for(int i = 0; i < currentSize; ++i)
    {
        if(strA[i] != strB[i])
        {
            dif++;
            position = i;
            if(dif > 1)
            {
                return no;
            }
        }
    }
    if(dif == 1)
    {
        letter = strA[position];
        return yes;
    }
    else return no;
    return 0;
}
