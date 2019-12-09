#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         unordered_map<int,int> gg;
         bool flag=false;
         int res_index;
         for(int i=0;i<n;i++)
         {
              if(!gg[arr[i]])
              {
                  gg[arr[i]]=1;
              }
              else
              {
                  gg[arr[i]]++;
              }
         }
         for(int i=0;i<n;i++)
         {
             if(gg[arr[i]]==k)
             {
                 flag=true;
                 cout<<arr[i]<<"\n";
                 break;
             }
         }
         if(!flag)
         {
             cout<<"-1"<<"\n";
         }
    }
    return 0;
}