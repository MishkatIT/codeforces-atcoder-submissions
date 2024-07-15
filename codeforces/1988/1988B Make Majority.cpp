/*
    Author    : MishkatIT
    Created   : Monday 15-07-2024 21:57:01
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string x;
        bool zero = false;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                zero = false;
                x += '1';
            }
            else {
                if (!zero) {
                    zero = true;
                    x += '0';
                }
            }
        }
        int one = count(x.begin(), x.end(), '1');
        if (one > (int)x.size() - one) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}