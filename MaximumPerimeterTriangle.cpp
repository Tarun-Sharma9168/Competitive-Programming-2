#include<iostream>
#include<algorithm>
using namespace std;
bool isTriangleorNot(int a,int b,int c){
    if((a+b > c )  && (b+c > a) && ( c+a > b)){
        return true;
    } 
    else{
        return false;
    }
}
int calculateMaxofThree(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int calculateMinofThree(int a,int b,int c)
{
     if(a<b && a<c)
    {
        return a;
    }
    else if(b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int n;
    bool exist=false;
    long long int max=-1e12;
    long long int perimeter;
    int maximum_side_mine ;
    int minimum_side_mine ;
    int maximum_side;
    int minimum_side;
    int answer_of_index=0;
    int a,b,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr , arr+n , greater<int>());
         int p=0;
    while(p<n-2 && !isTriangleorNot(arr[p],arr[p+1],arr[p+2])){
        p++;
    }
    cout<<"  "<<p<<"\n";
    if(p == n-3)
    {
        answer_of_index=p;
        exist=true;
    }
    else if(p==n-2){
        exist=false;
    }
    else{
    //    cout<<"p's value"<<p<<" "<<"\n";
         exist=true;
         answer_of_index=p;
         a=arr[p];
         b=arr[p+1];
         c=arr[p+2];
         max=a+b+c;
         maximum_side_mine = calculateMaxofThree(a,b,c);
         minimum_side_mine = calculateMinofThree(a,b,c);
    for(int i=p+1;i<n-2;i++)
    {    a=arr[i];
         b=arr[i+1];
         c=arr[i+2];
         perimeter=a+b+c;
         if(isTriangleorNot(a,b,c)){         
         //maximum_side_mine=calculateMaxofThree(a,b,c);
         //minimum_side_mine=calculateMinofThree(a,b,c); 
         //cout<<a<<" "<<b<<" "<<c<<"\n";
         exist=true;
         maximum_side = calculateMaxofThree(a,b,c);
         minimum_side = calculateMinofThree(a,b,c);
         if(perimeter == max)
         {
         if(maximum_side > maximum_side_mine)
         {
             maximum_side_mine=maximum_side;
             answer_of_index=i;
             break;
         }
         else if(maximum_side == maximum_side_mine)
         {
             if(minimum_side > minimum_side_mine){
                 minimum_side_mine=minimum_side;
                 answer_of_index=i;
                 break;
             }
             else if(minimum_side_mine==minimum_side){
                 answer_of_index=i;
                 break;
             }
         }  
         }
         else{
             break;
         }        
}
}
    }
if(exist){
             int new_arr[3];
             new_arr[0]=arr[answer_of_index];
             new_arr[1]=arr[answer_of_index+1];
             new_arr[2]=arr[answer_of_index+2];
             sort(new_arr,new_arr+3);     

             for(int i=0;i<3;i++){
                 cout<<new_arr[i]<<" ";
             }        
}  
    else{
        cout<<"-1"<<"\n";
    }
return 0;
}