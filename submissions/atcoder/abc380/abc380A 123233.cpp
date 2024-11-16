/*
    Author    : MishkatIT
    Created   : Saturday 16-11-2024 18:01:00
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    map<char, int> mp;
    for (auto&i : str) {
        mp[i]++;
    }
    bool ok = true;
    for (char c = '1'; c <= '3'; c++) {
        ok &= (mp[c] == (c - '1') + 1);
    }
    cout << (ok ? "Yes" : "No") << '\n';

    return 0;
}