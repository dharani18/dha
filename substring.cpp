#include<iostream>
  using namespace std;
  void CompareString(string, string, int);
  int ComputeStringLength(string str);
  int main()
  {
   string str = ""; string str1 = ""; int len = 0, len1 = 0;
   cout << "\nenter string ";
   cin >> str;
   cout << "\nenter string 2 : ";
   cin >> str1;

   len = ComputeStringLength(str);
   len1 = ComputeStringLength(str1);
   if (len == len1)
    CompareString(str, str1, len);
   else
    cout << "not possible";
   return 0;
  }

  int ComputeStringLength(string str)
  {
   int len = 0;
   for (int i = 0; str[i] != '\0'; i++)
   {
    len++;
   }
   return len;
  }


  void  CompareString(string str, string str1, int n)
  {
   int index = 0, flag = 0, curr_index = 0, count1 = 0, flagj = 0;
   for (int i = 0; i<n; i++)
   {
    for (int j = flagj; j<n; j++)
    {
     if (str[i] == str1[j])
     {
      index = j;
      flagj =j;
      count1++;
      flag++;
      if (flag == 1)
      {
       curr_index = index;
      }
      break;
     }

    }
   }
   int temp = count1;
   if (count1 != n)
   {
    if (curr_index>=0)
    {
     int k = 0;
     for (int i = n - 1; i>n - curr_index - 1; i--)
     {
      if (str[i] == str1[k])
      {
       temp++;
       k++;
      }

     }
    }
    if (temp == n)
    {
     cout << "yes";
    }
    else
    {
        cout<<"no";
        return 0;
    }
