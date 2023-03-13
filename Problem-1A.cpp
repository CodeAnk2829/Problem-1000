// Problem - Theatre Square
#include <bits/stdc++.h>
using namespace std;
int main() {
    long int n, m, a;
    cin >> n >> m >> a;
    long long int length_for_n;
    if(n % a == 0) {
        length_for_n = (n / a);
    } else {
        length_for_n = (n / a) + 1;
    }
    long long int length_for_m;
    if (m % a == 0) {
        length_for_m = (m / a);
    }
    else {
        length_for_m = (m / a) + 1;
    }
    cout << (length_for_m * length_for_n);
    return 0;
}