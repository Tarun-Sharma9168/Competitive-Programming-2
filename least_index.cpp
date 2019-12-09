#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    string p;
    while(t--)
    {
         cin>>s;
         cin>>p;
         unordered_map<char,int> gg;
         int i=0; 
         while(s[i]!='\0')
         {
             if(!gg[s[i]])
             {
                 gg[s[i]]=i+1;
             } 
             else
             {
                 if(i < gg[s[i]])
                 {
                     gg[s[i]]=i+1;
                 }
             }
             i++;
         }
         i=0;
         int min=1e9;
         int min_index;
         while(p[i]!='\0')
         {
             if(gg[p[i]])
             {
                 if(gg[p[i]] < min)
                 {
                     min=gg[p[i]];
                     min_index=i;
                 }
             }
             i++;
         }
         if(min != 1e9)
         {
             cout<<p[min_index];
         }
         else
         {
             cout<<"$";
         }
         cout<<"\n";
    }
    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,k,n,min=100001;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        while(str2[i]!='\0')
        {
            k=str1.find(str2[i]);
            if(min > k && k>=0)
            {
                min=k;
            }
            i++;
        }
         //cout<<min;
        if(min>=0 && min<100001)
        cout<<str1[min];
        else if(min==100001)
        cout<<"$";
        cout<<"\n";
    }
	return 0;
}
*/