/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool pref = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            pref = false;
            break;
        }
    }

    bool suf = true;
    for (int i = n - 1, j = m - 1; i >= 0; i--, j--) {
        if (s[i] != t[j]) {
            suf = false;
            break;
        }
    }
    
    if (pref && suf) {
        cout << 0;
    } else if (pref) {
        cout << 1;
    } else if (suf) {
        cout << 2;
    } else {
        cout << 3;
    }

    return 0;
}