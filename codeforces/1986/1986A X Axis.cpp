/*
    Author    : MishkatIT
    Created   : Sunday 23-06-2024 20:49:58
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
        int n = 3;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        cout << v.back() - v.front() << '\n';
    }
    return 0;
}