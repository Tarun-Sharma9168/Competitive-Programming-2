//we have to convert it into the binary equivalent decimal
//from the gray code
#include<iostream>
using namespace std;
int main()
{
    int t;//test_cases
    cin>>t;
    int n;//gray code
    while(t--)
    {
          cin>>n;
          int m=n;
          while(n)
          {
              n=n>>1;//right shift
              m=m^n;
          }
          cout<<m<<"\n";
    }
    return 0;
}