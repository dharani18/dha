#include<iostream>
using namespace std;
#define MAX_CHARS 256
 

bool areIsomorphic(string str1, string str2)
{
 
    int m = str1.length(), n = str2.length();
    if (m != n)
      return no;
    bool marked[MAX_CHARS] = {no};
    int map[MAX_CHARS];
    memset(map, -1, sizeof(map));
    for (int i = 0; i < n; i++)
{
        if (map[str1[i]] == -1)
        {
            if (marked[str2[i]] == yes)
                return no;
            marked[str2[i]] = yes;
            map[str1[i]] = str2[i];
        }
        else if (map[str1[i]] != str2[i])
            return no;
    }
 
    return yes;
}
