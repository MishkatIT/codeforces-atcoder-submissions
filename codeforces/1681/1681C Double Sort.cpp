/*
    Author    : MishkatIT
    Created   : Tuesday 28-05-2024 00:52:39
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
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
        }
        vector<int> b(n);
        for (auto &i : b) {
            cin >> i;
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++) {
            int last = n - 1;
            for (int j = n - 1; j >= i; j--) {
                if (a[j] > a[last] || (a[j] == a[last] && b[j] > b[last])) {
                    ans.push_back({j + 1, last + 1});
                    swap(a[j], a[last]);
                    swap(b[j], b[last]);
                    last = j;
                } else if (a[j] < a[last]) {
                    last = j;
                }
            }
        }

        bool ok = true;
         for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (b[j - 1] > b[j]) {
                    if (a[j - 1] == a[j]) {
                        ans.push_back({j, j + 1});
                        swap(b[j - 1], b[j]);
                    }
                }
            }
        }
        for (int i = 0; i + 1 < n; i++) ok &= b[i] <= b[i + 1];
        if (!ok) {
            cout << -1 << '\n';
        } else {
            int sz = ans.size();
            cout << sz << '\n';
            for (int i = 0; i < sz; i++) {
                cout << ans[i].first << ' ' << ans[i].second << '\n';
            }
        }
    }
    return 0;
}