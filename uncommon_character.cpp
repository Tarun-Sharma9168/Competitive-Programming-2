#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
       string s,r;
       cin>>s>>r;
       int l1,l2;
       l1=s.length();
       l2=r.length();
       map<char,int>mp;
       for(int i=0;i<l1;i++)
        mp[s[i]]=1;
        for(int i=0;i<l2;i++)
        {
            if(mp.find(r[i])== mp.end() && mp[r[i]]!=1)
             mp[r[i]]=2;
             else if(mp[r[i]]==2)
             mp[r[i]]=2;
             else
             mp[r[i]]=3;
            
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second!=3)
            cout<<it->first;
        }
          cout<<endl;
   }
}