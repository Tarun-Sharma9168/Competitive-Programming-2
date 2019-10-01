#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    long long int area=0;
    int min_count=0;
    //nt max=-1e8;
    for(int i=0;i<n;i++){
        //int element;
        cin>>arr[i];
        //arr[i]=element;
      //  if(element > max){
        //    max=element;
        //}
    }
    //bool arr_bool[100001]={0};

  /*  for(int i=0;i<10;i++){
        cout<<arr_bool[i]<<" ";
    }
*/
    sort(arr,arr+n);
    int i=0;
    while(i<n){
        min_count++;

        area=arr[i]+k;
        while(i<n && arr[i]<=area)i++;

        i--;

        area=arr[i]+k;
        while(i<n && arr[i]<=area)i++;
    }

cout<<min_count<<"\n";
return 0;
}