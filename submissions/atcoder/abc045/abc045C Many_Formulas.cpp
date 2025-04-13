#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define int long long
using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int n = str.size();
    int ans = 0;

    for (int mask = 0; mask < (1 << (n - 1)); mask++) {
        int now = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            now = now * 10 + (str[i] - '0');
            if ((mask >> i) & 1 || i == n - 1) {
                sum += now;
                now = 0;
            }
        }
        ans += sum;
    }
    cout << ans << '\n';
    return 0;
}