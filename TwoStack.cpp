#include<iostream>
#include<vector>
#include "stack"
using namespace std;
int main()
{
vector<int> v1;
vector<int> v2;
vector<int> v3;
stack<int> s1;
int n1,n2,n3;
cin>>n1>>n2>>n3;
int element;
for(int i=0;i<n1;i++)
{
    cin>>element;
    s1.push(element);
}
for(int i=0;i<n1;i++)
{
    v1.push_back(s1.top());
    s1.pop();
}
for(int i=0;i<n2;i++)
{
    cin>>element;
    s1.push(element);
}
for(int i=0;i<n2;i++)
{
    v2.push_back(s1.top());
    s1.pop();
}
for(int i=0;i<n3;i++)
{
    cin>>element;
    s1.push(element);
}
for(int i=0;i<n3;i++)
{
    v3.push_back(s1.top());
    s1.pop();
}
for(int i=1;i<n1;i++)
{
    v1[i]=v1[i]+v1[i-1];
}
for(int i=1;i<n2;i++)
{
    v2[i]=v2[i]+v2[i-1];
}
for(int i=1;i<n3;i++)
{
    v3[i]=v3[i]+v3[i-1];
}
int i,j,k;
    i = n1-1;
    j = n2-1;
    k = n3-1;
    while(i>=0 && j>=0 && k>=0){
        if(v1[i]==v2[j] && v2[j]==v3[k]){
            printf("%d",h1[i]);
            return 0;
        }
        while(v1[i]>v2[j] || v1[i]>v3[k]){
            i--;
        }
        while(v2[j]>v1[i] || v2[j]>v3[k]){
            j--;
        }
        while(h3[k]>h2[j] || h3[k]>h1[i]){
            k--;
        }
    }
    cout<<"0"<<"\n";
    return 0;
}