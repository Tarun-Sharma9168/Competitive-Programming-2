#include<iostream>
using namespace std;
int main()
{
  int a;
  int b;
  int t;
  cin>>t;

  while(t--)
  {
  //2^10 == 10^3
    cin>>a>>b;
    int result=a*b;
    cout<<result<<"\n";
  }
  return 0;    
}
//double,float,char,bool,int,long long int
//if a=2^20 b=2^20
//it works or not???