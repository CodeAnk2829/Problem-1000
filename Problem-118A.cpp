// Problem - String Task
#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[7] = "aeiouy";
    char str[101];
    cin.getline(str , 101);
    int n = 2 * strlen(str) + 1;
    strlwr(str);
    char *p = new char[n];
    int i, k = 0, l = 1;
    for(i = 0; str[i]; ++i){
        int j;
        for(j = 0; s[j]; ++j){
            if(s[j] == str[i]){
                break;
            }
        }
        if(s[j] == 0){
            p[k] = '.';
            p[l] = str[i];
            k += 2;
            l += 2;
        }
    }
    p[k] = 0;
    cout << p;
    return 0;
}