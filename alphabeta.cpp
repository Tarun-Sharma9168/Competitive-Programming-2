#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int element;
    set<int> si;
    for(int i=0;i<n;i++)
    {
       cin>>element;
       si.insert(element);
    }
    cout<<si[1]<<"\n";
    return 0;
}