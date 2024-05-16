/*
    Author    : MishkatIT
    Created   : Thursday 16-05-2024 21:30:57
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
        int w, h;
        cin >> w >> h;
        vector<vector<int>> v(4);
        for (int i = 0; i < 4; i++) {
            int k;
            cin >> k;
            vector<int> temp;
            for (int j = 0; j < k; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            v[i] = temp;
        }
        ll ans = 0;
        for (int i = 0; i < 4; i++) {
            int ww = v[i].back() - v[i].front();
            int hh;
            if (i <= 1)
                hh = h;
            else
                hh = w;
            ans = max(ans, ww * 1LL * hh);
        }
        cout << ans << '\n';
    }
    return 0;
}