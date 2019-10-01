#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H,W;
    cin>>H>>W;
    int arr[H][W];
    int sum=0;
    //int element;
    //int result;
    //int len=1;
    //int bre=1;
    //int height;
    int first_element;
    int last_element;
    int sum_element;
    int sum_normal=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
          cin>>sum_element;
          arr[i][j]=sum_element;
          sum_normal+=sum_element;
        }
    }
    if(H==1 && W==1){
        cout<<(4*arr[0][0]+2)<<"\n";
    }
    else{
    
    if(W>1){
    for(int i=0;i<H;i++){
        for(int j=1;j<W;j++){
          first_element=arr[i][0];
          last_element=arr[i][W-1];
          sum+=abs(arr[i][j]-arr[i][j-1]);
        }
        sum+=first_element+last_element;
    }
    }
    if(H>1){
    for(int j=0;j<W;j++){
        for(int i=1;i<H;i++){
          first_element=arr[0][j];
          last_element=arr[H-1][j];
          sum+=abs(arr[i][j]-arr[i-1][j]);
        }
        sum+=first_element+last_element;
    }
    }
    if(H==1 || W==1){
        sum+=(2*sum_normal);
    }
    sum+=2*(H*W);
    cout<<sum<<"\n";
    }
    return 0;
}