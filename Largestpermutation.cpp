#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int, greater<int>> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]] = i;
    }
    int index = 0;
    do {
        while (index < n && a[index] == (*m.begin()).first) {
            index++;
            m.erase(m.begin());
        }
        if (index < n) {
            const pair<int, int> &x = *m.begin();
            a[x.second] = a[index];
            a[index] = x.first;
            m[a[x.second]] = x.second;
            m.erase(m.begin());
            k--;
            index++;
        }
    } while (k && index < n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
