/*
    Author    : MishkatIT
    Created   : Sunday 14-07-2024 00:12:25
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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    map<int, int> mp;
    for (auto& i : v) {
        mp[i]++;
    }
    int ans = 0;
    int cur = 0;
    for (auto& i : mp) {
        ans += 1LL * i.second * (n - i.second) - (i.second * cur);
        cur += i.second;
    }
    cout << ans << '\n';
    return 0;
}