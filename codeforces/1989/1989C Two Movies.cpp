/*
    Author    : MishkatIT
    Created   : Saturday 29-06-2024 00:54:43
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
        vector<int> a(n), b(n);
        for (auto& i : a) cin >> i;
        for (auto& i : b) cin >> i;
        int r1 = 0, r2 = 0;
        int bothPos = 0, bothNeg = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                if (a[i] == 0) continue;
                if (a[i] == -1) bothNeg++;
                else bothPos++;
            } else {
                if (a[i] == 0 || b[i] == 0) {
                    if (a[i] == 0) {
                        if (b[i] > 0) r2 += b[i];
                    } else {
                        if (a[i] > 0) r1 += a[i];
                    }
                } else {
                    if (a[i] == -1) {
                        r2 += b[i];
                    } else {
                        r1 += a[i];
                    }
                }
            }
        }

        while (bothPos) {
            if (r1 > r2) {
                r2++;
            } else {
                r1++;
            }
            bothPos--;
        }
        // debug(r1);debug(r2);
         while (bothNeg) {
            if (r1 > r2) {
                r1--;
            } else {
                r2--;
            }
            bothNeg--;
        }
        cout << min(r1, r2) << '\n';
    }
    return 0;
}