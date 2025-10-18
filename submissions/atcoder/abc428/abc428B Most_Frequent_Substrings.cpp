/*
    Author    : MishkatIT
    Created   : Saturday 18-10-2025 18:37:23
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    map<string, int> mp;
    for (int i = 0; i + k <= n; i++) {
        mp[str.substr(i, k)]++;
    }
    map<int, vector<string>> x;
    for (auto& [a, b] : mp) {
        x[b].push_back(a);
    }
    int a = x.rbegin()->first;
    vector<string> ans = x.rbegin()->second;
    cout << a << '\n';
    for (auto& i : ans) {
        cout << i << ' ';
    }
    return 0;
}