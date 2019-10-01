#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int z;
    cin>>t;

    while(t--){
        cin>>n;
        z=n;


        if(z%3==0){
            cout<<string(z,'5');//important to print the string or a character z times the 
        }

        while(z % 3 !=0)
        {
           z=z-5;
           if(z<0){
               cout<<"-1"<<"\n";
               break;
           }
           else{
               if(z % 3 ==0){
                   cout<<string(z,'5')<<string((n-z),'3')<<"\n";
               }
           }
        }
    }
    return 0;
}