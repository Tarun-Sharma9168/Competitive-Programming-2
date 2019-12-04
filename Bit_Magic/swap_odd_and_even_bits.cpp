//Swap odd and even bits
//Of given binary equivalent decimal number
#include<iostream>
using namespace std;
unsigned int swap_bits(unsigned int x)
{
    unsigned int even_bits= x & 0xAAAAAAAA;
    //It gives you all the even bits in your number
    unsigned int odd_bits= x & 0x55555555;
    //It gives you all the odd bits in your number

    even_bits =even_bits >> 1;
    odd_bits =odd_bits << 1;
    return (even_bits | odd_bits);
}
int main()
{
    int t;//testcases
    cin>>t; 
    int n; //number that you want to process
    while(t--)
    {
        cin>>n;
        cout<<swap_bits(n)<<"\n";
    }
    return 0;
}