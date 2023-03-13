// Problem Multiplication Table
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n;
    cin >> n;
    ll x;
    cin >> x;
    vector<pair<int, int>> v;
    for(int i = 1; i * i <= x; ++i) {
        if(x % i == 0) {
            pair<int, int> p = {i, x/i};
            v.push_back(p);
        }
    }
    int count = 0;
   
    for(auto &p : v) {
        if(p.first <= n && p.second <= n) {
            count += 2;
            if(p.first == p.second) {
                count--;
            }
        }
    }
    cout << count << endl;
    return 0;
}