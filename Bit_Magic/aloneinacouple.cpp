//Alone in a couple problem is you have n numbers in an array 
//all are in pair except and you have to find that persom just xor all the numbers you will find the 
//number 
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
           // ans = ans ^ arr[i];
        }
         int ans=arr[0];
        for(int i=1;i<n;i++)
        {
           ans=ans^arr[i];
        }
         cout<<ans<<"\n";//you have your answers
    }
    return 0;

}