#include<iostream>
using namespace std;
{
    int x = 0, y = 0;
  int dir = N;
  for (int i=0; path[i]; i++)
  {
      char move = path[i];
      if (move == 'R')
        dir = (dir + 1)%4;
      else if (move == 'L')
        dir = (4 + dir - 1)%4;
      else 
      {
         if (dir == N)
            y++;
         else if (dir == E)
            x++;
         else if (dir == S)
            y--;
         else // dir == W
            x--;
      }
  }
  return (x == 0 && y == 0);
}
 
}
int main()
{
    char path[] = "GLGLGLG";
    if (isCircular(path))
      cout << "yes";
    else
      cout << "no";
      return 0;
}
