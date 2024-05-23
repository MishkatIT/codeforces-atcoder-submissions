/*
    Author    : MishkatIT
    Created   : Friday 24-05-2024 02:07:32
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
        string str;
        cin >> str;
        int one = 0;
        int n = str.size();
        str += str;
        for (int i = 0; i < str.size(); i++) {
            int j = i;
            while (j < str.size() && str[j] == '1') {
                j++;
            }
            one = max(one, j - i);
            i = j;
        }

        if (!one) {
            cout << 0 << '\n';
        } else {
            if (one > n) {
                cout << n * 1LL * n << '\n';
            } else {
                if (one & 1) {
                    cout << 1LL * (one + 1) / 2 * (one + 1) / 2 << '\n';
                } else {
                    cout << 1LL * (one + 2) / 2 * one / 2 << '\n';
                }
            }
        }
    }
    return 0;
}