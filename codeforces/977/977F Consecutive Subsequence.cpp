/*
    Author    : MishkatIT
    Created   : Saturday 08-06-2024 01:34:58
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    map<int, int> dp;
    for (auto& i : v) {
        dp[i] = dp[i - 1] + 1;
    }
    int ans = 0;
    int last;
    for (auto& i : dp) {
        if (i.second > ans) {
            ans = i.second;
            last = i.first;
        }
    }
    vector<int> idx;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == last) {
            last--;
            idx.push_back(i + 1);
        }
    }
    cout << ans << '\n';
    for (int i = idx.size() - 1; i >= 0; i--) {
        cout << idx[i] << ' ';
    }
    return 0;
}