/*
    Author    : MishkatIT
    Created   : Monday 01-07-2024 21:48:53
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

    vector<int> ans;
    ans.push_back(v.front());
    for (int i = 1; i < n; i++) {
        if (__gcd(ans.back(), v[i]) > 1) {
            ans.push_back(1);
        }
        ans.push_back(v[i]);
    }
    int sz = ans.size();
    cout << sz - n << '\n';
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}