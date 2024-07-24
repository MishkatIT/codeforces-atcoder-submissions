/*
    Author    : MishkatIT
    Created   : Thursday 25-07-2024 01:44:19
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
const int mod = 1e8;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int dp[100 + 5][100 + 5][10 + 5][10 + 5];

int solve(ll f, ll h, ll fk, ll hk, ll curfk = 0, ll curhk = 0) {
    if (!f && !h) return 1;
    if (dp[f][h][curfk][curhk] != -1) return dp[f][h][curfk][curhk];
    ll x = 0;
    if (f > 0 && curfk < fk) x = solve(f - 1, h, fk, hk, curfk + 1, 0);
    ll y = 0;
    if (h > 0 && curhk < hk) y = solve(f, h - 1, fk, hk, 0, curhk + 1);
    return dp[f][h][curfk][curhk] = (x + y) % mod;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof dp);
    ll f, h, fk, hk;
    cin >> f >> h >> fk >> hk;
    cout << solve(f, h, fk, hk);

    return 0;
}



