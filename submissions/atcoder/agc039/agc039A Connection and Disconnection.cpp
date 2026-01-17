/*
    Author    : MishkatIT
    Created   : Thursday 12-06-2025 19:16:54
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    string temp = str;
    ll k ;
    cin >> k;
    int n = str.size();
    
    if (set<char>(str.begin(), str.end()).size() == 1) {
        cout << (n * k) / 2;
        return 0;
    }
    ll ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            ans++;
            i++;
        }
    }
    ll bns = 0;
    for (int i = 0; i + 1 < 2 * n; i++) {
        if (str[i % n] == str[(i + 1) % n]) {
            bns++;
            i++;
        }
    }
    cout << ans + (bns - ans) * (k - 1);
    return 0;
}