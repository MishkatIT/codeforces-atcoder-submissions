/*
    Author    : MishkatIT
    Created   : Thursday 30-05-2024 20:34:54
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
        string str;
        cin >> str;
        bool ok = true;

        for (int i = 0; i + 1 < n; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i + 1] >= 'a' && str[i + 1] <= 'z')) {
                if ((str[i] >= 'a' && str[i] <= 'z'))
                    ok = false;
            }
        }
        for (int i = 0; i + 1 < n; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') && !(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
                continue;
            if (str[i] > str[i + 1])
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}