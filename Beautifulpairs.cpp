#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
map<int,int> m1,m2;
bool flag=false;
int pairs=0;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    cin>>b[i];
}

for(int i=0;i<n;i++){
    m1[a[i]]++;
}

for(int i=0;i<n;i++){
    m2[b[i]]++;
}
map<int,int>::iterator it=m1.begin();//vector and map data structure are always traversed by the use of map
while(it!=m1.end()){
    pairs+=min(it->second,m2[it->first]);
    if(it->second != m2[it->first])//it means you have the provision to change some element in B
      flag=true;
    it++;
}

if(flag)
      cout<<(pairs+1)<<"\n";//because you just change one element which ultimately increases the 
      //no of beautiful pairs
else
      cout<<(pairs-1)<<"\n";
  //when everything is same that is every element is same then we have to reduce the beautiful pair
  //by one that is we have to reduce the element by one...
return 0;
}




}