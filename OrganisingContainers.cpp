#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int n;
    int sum=0;
    long long int max=-1e10;
    int element;
    int index_of_max;
    bool flag=false;
    while(q--)
    {
      cin>>n;
    int arr[n][n+1];
    int arr_row_sum[n];
    int arr_col_sum[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
          {
             cin>>element;
             arr[i][j]=element;
             sum+=element
          }
          arr_row_sum[i]=sum;
    }


       for(int i=0;i<n;i++)
       {
          for(int j=0;j<n;j++)
          {
             cin>>element;
             arr[j][i]=element;
             sum+=element
          }
          arr_col_sum[i]=sum;
      }


      sort(arr_col_sum,arr_col_sum+n);
      sort(arr_row_sum,arr_row_sum+n);


      for(int i=0;i<n;i++)
      {
          if(arr_col_sum[i]==arr_row_sum[i])
          {
              flag=true;
          }
          else
          {
              flag=false;
              break;
          }
      }

      if(flag)
      {
          cout<<"Possible"<<"\n";
      }
      else
      {
          cout<<"Impossible"<<"\n";
      }
    }
    return 0;
}