/*
    Author    : MishkatIT
    Created   : Sunday 26-05-2024 02:29:03
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (n <= 2) {
            cout << min(v.front(), v.back()) << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 0; i + 2 < n; i++) {
            vector<int> temp;
            temp.push_back(v[i]);
            temp.push_back(v[i + 1]);
            temp.push_back(v[i + 2]);
            sort(temp.begin(), temp.end());
            ans = max(ans, temp[1]);
        }
        cout << ans << '\n';
    }
    return 0;
}