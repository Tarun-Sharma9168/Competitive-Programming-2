#include<bits/stdc++.h>
using namespace std;
#define MAX (long long int)1e17
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    std::cin>>n;

    long long int arr[n];
    long long int index_array[MAX];

    for(long long int i=0;i<MAX;i++)
    {
        index_array[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int min=MAX;
    for(int i=0;i<n;i++)
    {
        index_array[arr[i]]=i;
    }
    sort(arr,arr+n);  
    for(int i=1;i<n;i++)
    {
       if((arr[i]-arr[i-1]) < min  && index_array[arr[i]] < index_array[arr[i-1]])
       {
            min=arr[i]-arr[i-1];
       } 
    }
    cout<<min<<"\n";
    return 0;
}
