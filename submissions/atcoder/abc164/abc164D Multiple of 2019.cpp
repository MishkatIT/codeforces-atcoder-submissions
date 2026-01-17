/*
    Author    : MishkatIT
    Created   : Thursday 25-09-2025 02:47:11
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
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int n = str.size();
    int cur = 0;
    int ten = 1;
    int mod = 2019;
    map<int, int> mp;
    mp[0] = 1;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        int dig = str[i] - '0';
        cur = ten * dig + cur;
        cur %= mod;
        ans += mp[cur];
        mp[cur]++;
        ten = (ten * 10) % mod;
    }
    cout << ans << '\n';
    return 0;
}