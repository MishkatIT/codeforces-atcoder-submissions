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

int n, i;
char modify (string& str, char ch) {
    for (char c = 'a'; c <= 'z'; c++) {
        bool ok = true;
        if (c == ch) ok = false;
        if (i + 2 < n && c == (str[i + 2])) ok = false;
        if (ok) {
            return (c);
        }
    }
}


int func(string& str) {
    int op = 0;
    for (i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            str[i + 1] = modify(str, str[i + 1]);
            op++;
        }
    }
    return op;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string revs = s;
    n = s.length();
    int op1 = func(s);
    reverse(revs.begin(), revs.end());
    int op2 = func(revs);
    if (op1 < op2) {
        cout << s;
    } else {
        reverse(revs.begin(), revs.end());
        cout << revs;
    }
    return 0;
}