/*
    Author    : MishkatIT
    Created   : Sunday 06-06-2024
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
        ll a, b;
        cin >> a >> b;
        ll Xor = a ^ b;
        int i = 0;
        while (Xor) {
            if (Xor & 1) {
                cout << (1 << i) << '\n';
                break;
            }
            Xor >>= 1;
            i++;
        }
    }
    return 0;
}
