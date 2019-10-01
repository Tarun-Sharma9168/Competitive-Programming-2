#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    int new_arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(k % n == 0)
    {}
    else
    {
        int new_index;
        for(int i=0;i<n;i++)
        {
            if((i-k) < 0)
            {
                 new_index = i-k+n;
            }
            else
            {
                new_index = i-k;
            }
            
            new_arr[new_index%n]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<new_arr[i]<<" ";
    }
    return 0;
}