/*
    Author    : MishkatIT
    Created   : Monday 03-06-2024 20:35:06
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
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        map<char, int> mp;
        for (auto& i : str) {
            mp[i]++;
        }
        int ans = 0;
        for (auto & i : {'A', 'B', 'C', 'D', 'E', 'F', 'G'}) {
            if (mp[i] < m) {
                ans += m - mp[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}