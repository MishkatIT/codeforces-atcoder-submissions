/*
    Author    : MishkatIT
    Created   : Saturday 22-03-2025 03:25:41
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
    for (int i = n; ; i++) {
        bool ok = true;
        for (int j = 2; j * j <= n; j++) {
            if (i % j == 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << i;
            break;
        }
    }

    return 0;
}