// Program - Lucky Division
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i;
    cin >> n;
    for(i = 1; i <= n; ++i) {
        int temp = i;
        while (temp > 0) {
            if ((temp % 10) != 4 && (temp % 10) != 7) {
                break;
            }
            temp /= 10;
        }
        if (temp == 0 && (n % i) == 0) {
            cout << "YES";
            break;
        }
    }
    if(i == n + 1) {
        cout << "NO";
    }
    return 0;
}