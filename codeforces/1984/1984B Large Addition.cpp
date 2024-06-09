/*
    Author    : MishkatIT
    Created   : Monday 10-06-2024 02:54:24
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
        string n;
        cin >> n;
        bool ok = true;
        if (n.front() != '1') ok = false;
        if (n.back() == '9') ok = false;
        for (int i = 1; i < n.size() - 1; i++) {
            if (n[i] == '0') ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}