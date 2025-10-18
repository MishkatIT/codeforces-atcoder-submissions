/*
    Author    : MishkatIT
    Created   : Saturday 18-10-2025 18:45:37
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int open = 0, close = 0;
    bool ok = true;
    string x;
    int cnt = 0;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            char c;
            cin >> c;
            x.push_back(c);
            if (c == '(') {
                open++;
            } else {
                close++;
                if (close > open) {
                    cnt++;   
                }
            }
        } else {
            if (x.back() == '(') {
                open--;
            } else {
                if (close > open) {
                    cnt--;
                }
                close--;
            }
            x.pop_back();
        }
        cout << ((cnt == 0 && (close == open)) ? "Yes" : "No") << '\n';
    }

    return 0;
}