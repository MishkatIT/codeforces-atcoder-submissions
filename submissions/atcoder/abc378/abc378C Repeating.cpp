/*
    Author    : MishkatIT
    Created   : Saturday 02-11-2024 18:21:20
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    map<int, int> mp;
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++) {
        if (mp.count(v[i])) {
            ans[i] = mp[v[i]];
        }
        mp[v[i]] = i + 1;
    }
    int sz = ans.size();
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}