/*
    Author    : MishkatIT
    Created   : Sunday 09-06-2024 20:34:47
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
        if (v.front() == v.back()) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << "RB";
            for (int i = 2; i < n; i++) cout << "R";
            cout << '\n';
        }
    }
    return 0;
}