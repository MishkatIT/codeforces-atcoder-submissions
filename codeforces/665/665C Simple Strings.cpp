/*
    Author    : MishkatIT
    Created   : Monday 06-05-2024 20:36:08
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

string str;
int n, i;
char modify (char c) {
    for (int ch = 0; ch < 26; ch++) {
        bool ok = true;
        if (ch == c - 'a') ok = false;
        if (i + 2 < n && ch == (str[i + 2] - 'a')) ok = false;
        if (ok) {
            return (ch + 'a');
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;
    n = str.length();
    for (i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            str[i + 1] = modify(str[i + 1]);
        }
    }
    cout << str;
    return 0;
}