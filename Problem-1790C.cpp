// Problem Premutation
#include <bits/stdc++.h>
using namespace std;
void solution() {
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i = 0; i < n; ++i) {
        vector<int> temp;
        for(int j = 0; j < n - 1; ++j) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    map<int, int> m;
    for(int i = 0; i < n; ++i) {
        m[v[i][0]]++;
    }
    int mx = 0, mn = n;
    int temp1, temp2;
    for(auto &p: m) {
        if(mx < p.second) {
            mx = p.second;
            temp1 = p.first;
        }
        if(mn > p.second) {
            mn = p.second;
            temp2 = p.first;
        }
    }
    cout << temp1 << " " << temp2 << " ";
    for(int j = 1; j < n - 1; ++j) {
        for(int i = 0; i < n; ++i) {
            if(temp2 != v[i][j]) {
                cout << v[i][j] << " ";
                temp2 = v[i][j];
                break;
            }
        }
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}