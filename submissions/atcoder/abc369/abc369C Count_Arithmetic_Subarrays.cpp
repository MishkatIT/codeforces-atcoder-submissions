/*
    Author    : MishkatIT
    Created   : Saturday 31-08-2024 18:30:08
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

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll cnt = 0;
        int dif;
        int j = i;
        if (j + 1 < n) dif = v[j + 1] - v[i], cnt = 1, ans++;
        j = i + 2;
        bool ok = false;
        while (j < n && v[j] - v[j - 1] == dif) {
            cnt++;
            ans += cnt;
            j++;
            ok = true;
        }
        if (j == n) break;
        if (ok) i = j - 2;
    }
    cout << ans + n << '\n';
    return 0;
}