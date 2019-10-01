#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int q;
    cin>>q;
    string s;
    int sum=0;
    while(q--)
    {
         sum=0; 
         cin>>s;

         for(int i=0,j=s.size()-1;i<j;i++,j--)
         {
             if(s[i]!=s[j])
             {
                 sum+=abs((s[i]-s[j]));
             }
         }
         cout<<sum<<"\n";
    }
    return 0;
}