// Problem - cAPS lOCK
#include <bits/stdc++.h>
using namespace std;
int main() {
    char str[101];
    cin.getline(str, 101);
    int i;
    for(i = 1; str[i] >= 'A' && str[i] <= 'Z'; ++i);
    if(str[i] != 0) {
        cout << str;
    } else if(str[0] >= 'a' && str[0] <= 'z') {
        strlwr(str);
        str[0] -= 32;
        cout << str;
    } else {
        cout << strlwr(str);
    }
    return 0;
}