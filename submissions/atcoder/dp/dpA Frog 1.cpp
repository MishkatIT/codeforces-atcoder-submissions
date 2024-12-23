/*
    Author    : MishkatIT
    Created   : Monday 23-12-2024 22:36:31
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

vector<int> dp;

ll solve(int n, vector<int>& v) {
    if (n <= 0) return 0;
    if (dp[n] != -1) return dp[n];
    ll a = abs(v[n] - v[n - 1]) + solve(n - 1, v);
    ll b = inf;
    if (n - 2 >= 0) {
        b = abs(v[n] - v[n - 2]) + solve(n - 2, v);
    }
    return dp[n] = min(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    dp.resize(n + 5, -1);
    cout << solve(n - 1, v) << '\n';

    return 0;
}