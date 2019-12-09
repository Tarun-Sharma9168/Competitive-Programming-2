#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    int t;//number of testcases
    cin>>t;
    int n;//the size of the array
    while(t--)
    {
       cin>>n;
       long long int arr1[n];
       long long int arr2[n];

       for(int i=0;i<n;i++)
       {
           cin>>arr1[i];
       } 
       for(int i=0;i<n;i++)
       {
           cin>>arr2[i];
       }
      map<long long int,long long int> gg1;
      map<long long int,long long int> gg2;
      for(int i=0;i<n;i++)
      {
          if(!gg1[arr1[i]])
          {
              gg1[arr1[i]]=1;
          }
          else
          {
             gg1[arr1[i]]++;
          }

          if(!gg2[arr2[i]])
          {
              gg2[arr2[i]]=1;
          }
          else
          {
              gg2[arr2[i]]++;
          }
      }
      auto it1=gg1.begin();  
      auto it2=gg2.begin();
      bool flag=true;
      while(it1!=gg1.end() && it2!=gg2.end())
      {
          if(it1->second != it2->second || it1->first != it2->first)
          {
            flag=false;
            break;
          }
          ++it1;
          ++it2;
      }
      if(flag)
      {
          cout<<"1"<<"\n";
      }
      else
      {
        cout<<"0"<<"\n";
      }
    }
    return 0;
}