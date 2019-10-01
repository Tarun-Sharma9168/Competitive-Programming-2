#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int main_count=1;
    int just_starting=arr[0];
    int max_range=arr[0]+4;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max_range)
        {
           just_starting=arr[i];
           max_range=just_starting+4;
           count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}