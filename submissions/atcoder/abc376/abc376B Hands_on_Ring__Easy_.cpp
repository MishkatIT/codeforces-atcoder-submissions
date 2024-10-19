/*
    Author    : MishkatIT
    Created   : Saturday 19-10-2024 18:15:55
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

    int n, q;
    cin >> n >> q;
    int l = 1, r = 2;
    ll ans = 0;
    while (q--) {
        char c;
        cin >> c;
        int x;
        cin >> x;
        if (c == 'L') {
            int cnt = 0;
            bool ok = false;
            int temp = l;
            while (true) {
                if (temp > n) temp = 1;
                if (temp == r) break;
                if (temp == x) {
                    l = temp;
                    ans += cnt;
                    ok = true;
                    break;
                }
                cnt++;
                temp++;
            }
            if (!ok) {
                 cnt = 0;
                 temp = l;
                while (true) {
                    if (temp <= 0) temp = n;
                    if (temp == x) {
                        l = temp;
                        ans += cnt;
                        break;
                    }
                    cnt++;
                    temp--;
                }
            }
        }
        if (c == 'R') {
            int cnt = 0;
            bool ok = false;
            int temp = r;
            while (true) {
                if (temp > n) temp = 1;
                if (temp == l) break;
                if (temp == x) {
                    r = temp;
                    ans += cnt;
                    ok = true;
                    break;
                }
                cnt++;
                temp++;
            }
            if (!ok) {
                 cnt = 0;
                 temp = r;
                while (true) {
                    if (temp <= 0) temp = n;
                    if (temp == x) {
                        r = temp;
                        ans += cnt;
                        break;
                    }
                    cnt++;
                    temp--;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}