using namespace std;
int main()
{
    int n;
    cout<<enter value;
    cin>>value;
    unsigned int get_nextpowerof2(unsigned int n)
{
 if (!(n & (n-1)))
 {
     return (n);
 }

 while (n & (n-1))
 {
    n = n & (n-1);
 }

 n = n << 1;
 return n;
}
}
