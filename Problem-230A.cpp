#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, n;
    cin >> s >> n;
    vector <pair <int, int>> v(n);
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end());
    for(auto &it : v) {
        // cout << s << " " << it.first << " " << it.second << endl;
        if(s > it.first) {
            s += it.second;
        } else {
            break;
        }
        n--;
    }
    if(n == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}