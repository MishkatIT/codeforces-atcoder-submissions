/*
    Author    : MishkatIT
    Created   : Monday 03-06-2024 20:42:25
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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }
        f--;
        int fav = v[f];
        // debug(fav);
        sort(v.rbegin(), v.rend());
        bool fi = false, se = false;
        while (k--) {
            if (v.front() == fav) {
                fi = true;
            }
            v.erase(v.begin());
        }
        for (auto& i : v) {
            if (i == fav) {
                se = true;
            }
        }
        if (fi && se) {
            cout << "MAYBE" << '\n';
        } else if (fi) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}