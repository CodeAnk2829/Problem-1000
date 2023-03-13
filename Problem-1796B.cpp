// Problem Asterisk-Minor Template
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        string b;
        cin >> b;
        bool flag = false;
        if(a.size() == 1 && b.size() == 1) {
            flag = true;
            if(a.front() == b.front()) {
                cout << "YES" << endl;
                cout << a.front() << "*" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if(a.front() == b.front() && a.back() == b.back()) {
            flag = true;
            cout << "YES" << endl;
            cout << a.front() << "*" << a.back() << endl;
        } else if(a.front() == b.front()) {
            flag = true;
            cout << "YES" << endl;
            cout << a.front() << "*" << endl;
        } else if(a.back() == b.back()) {
            flag = true;
            cout << "YES" << endl;
            cout << "*" << a.back() << endl;
        } else {
            for(int i = 0; i < a.size(); ++i) {
                string temp;
                for(int j = 0; j < b.size(); ++j) {
                    if(a[i] == b[j] && a[i + 1] == b[j + 1]) {
                        flag = true;
                        temp.push_back(a[i]);
                        temp.push_back(a[i + 1]);
                        break;
                    }
                }
                if(flag) {
                    cout << "YES" << endl;
                    cout << "*" << temp << "*" << endl;
                    break;
                }
            }
        }
        if(flag == false) {
            cout << "NO" << endl;
        }
    }
    return 0;
}