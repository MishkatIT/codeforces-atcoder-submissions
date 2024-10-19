/*
    Author    : MishkatIT
    Created   : Saturday 19-10-2024 18:38:32
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
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    int m = n - 1;
    vector<int> b(m);
    for (auto& i : b) {
        cin >> i;
    }
    sort(b.begin(), b.end());
    int ans = -1;
    int cnt = 0;
    for (int i = n - 1, j = m - 1; i >= 0; i--) {
        if (a[i] <= b[j]) {
            j--;
        } else {
            ans = a[i];
            cnt++;
        }
    }
    if (cnt == 1) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}