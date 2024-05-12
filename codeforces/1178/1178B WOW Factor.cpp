/*
    Author    : MishkatIT
    Created   : Monday 13-05-2024 00:33:45
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    string str;
    cin >> str;
    str = '#' + str;
    int n = str.size();
    vector<int> suf(n + 5), pref(n + 5);
    for (int i = 2; i <= n; i++) {
        pref[i] = pref[i - 1] + (str[i] == str[i - 1] && str[i - 1] == 'v');
    }
    for (int i = n - 1; i > 0; i--) {
        suf[i] = suf[i + 1] + (str[i] == str[i + 1] && str[i + 1] == 'v');
    }
    
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (str[i] == 'o') {
            ans += (1LL * pref[i - 1] * suf[i + 1]);
        }
    }
    cout << ans << '\n';
    return 0;
}