/*
    Author    : MishkatIT
    Created   : Friday 21-06-2024 23:16:29
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
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int dp[N][6];

int cal(vector<int>& v, int k, int z, int i = 1) {
    if (!k) return 0;
    if (dp[i][z] != -1) return dp[i][z];
    int mx = 0;
    mx = max(mx, v[i] + cal(v, k - 1, z, i + 1));
    if (i > 0 && z > 0) {
        mx = max(mx, v[i] + cal(v, k - 1, z - 1, i - 1));
    }
    return dp[i][z] = mx;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, k, z;
        cin >> n >> k >> z;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        memset(dp, -1, sizeof dp);
        cout << v[0] + cal(v, k, z) << '\n';
    }
    return 0;
}