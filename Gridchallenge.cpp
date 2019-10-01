#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    bool flag=true;
    int length;
    while(t--)
    {
        flag=true;
          cin>>n;

          string str[n];
          for(int i=0;i<n;i++){
              cin>>str[i];
          }
           length=str[0].size();
          //cout<<"length"<<" "<<length<<"\n";
          for(int i=0;i<n;i++){
              sort(str[i].begin(),str[i].end());
          }


          for(int i=0;i<length;i++)
          {
              for(int j=0;j<n-1; j++)
              {
                  if(str[j][i] > str[j+1][i])
                  {
                      flag=false;     
                      break;
                  }
              if(!flag)break;
             }
          }
 if(flag)
 {
     cout<<"YES"<<"\n";
 }
else
{
        cout<<"NO"<<"\n";
}
}
return 0;
}