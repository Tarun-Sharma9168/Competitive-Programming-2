#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long long int k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  

    sort(arr,arr+n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <=k && sum+arr[i]<=k)
        {
            sum+=arr[i];
            count++;
        }
        else
        {
            break;
        }
    }
    cout<<count<<"\n";
    return 0;
}