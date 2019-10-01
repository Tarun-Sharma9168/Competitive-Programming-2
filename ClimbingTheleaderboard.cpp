#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> mm;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        mm[temp]++;
    }
  cout<<"size of mm "<<mm.size()<<"\n";
   for(auto it=mm.begin();it!=mm.end();++it)
   {
       cout<<it->first<<" "<<it->second<<" "<<"\n";
   }
    vector<pair<int, int>> v;
    for (pair<const int, int> &x : mm) {
        v.push_back(pair<int, int>(x.first, x.second));
    }
     cout<<"the size of the vector"<<v.size()<<"\n";
    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<it->first<<"  "<<it->second<<" "<<"\n"; 
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        auto p1=(lower_bound(v.begin(), v.end(), pair<int, int>(temp, (int) 1e9)) - v.begin());
        cout<<(p1)<<" "<<"\n";
        cout << (1 + v.size() - (lower_bound(v.begin(), v.end(), pair<int, int>(temp, (int) 1e9)) - v.begin())) << '\n';
    }
    return 0;
}
