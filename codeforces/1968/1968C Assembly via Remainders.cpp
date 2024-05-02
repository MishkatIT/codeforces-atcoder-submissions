/*
    Author    : MishkatIT
    Created   : Thursday 02-05-2024 21:22:21
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
        int n;
        cin >> n;
        vector<int> v(n - 1);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> ans;
        ans.push_back(v.back());
        ans.push_back(1e9 - v.back());
        for (int i = n - 3; i >= 0; i--) {
            ans.push_back(ans.back() - v[i]);
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}