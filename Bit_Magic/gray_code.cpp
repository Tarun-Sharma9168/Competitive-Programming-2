//We have to find the gray code very famous in the computer science 
//used in k-maps,error correction and communication
#include<iostream>
using namespace std;
int main()
{
    int t;//testcases
    cin>>t;
    int n; 
    while(t--)
    {
        cin>>n;

        int p= n ^ ( n >> 1 );//Simple way to do is to just xor it with its right shift equivalent 
        cout<<p<<"\n"; 
    }
    return 0;
}