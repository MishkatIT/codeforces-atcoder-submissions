/*
    Author    : MishkatIT
    Created   : Friday 07-06-2024 20:53:41
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int p = -1, cur = 1;
        for (int i = 0; i < n; i++) {
            if (i + 1 == n || str[i] != str[i + 1]) {
                if (cur == k) {
                    cur = 0;
                } else {
                    p = i;
                    if (cur > k) {
                        p -= k;
                    }
                    break;
                }
            }
            cur++;
        }

        auto ok = [&](string& str) {
            bool good = true;
            for (int i = 0; i < n; i += k) {
                if (i > 0) {
                    if (str[i] == str[i - 1]) {
                        good = false;
                        break;
                    }
                }
                for (int j = i; j < i + k; j++) {
                    if (str[j] != str[i]) {
                        good = false;
                        break;
                    }
                }
            }

            return good;
        };
        // debug(p);
        int ans = -1;
        if (p == -1) {
            ans = n;
        } else if(p == n) {
            ans = -1;
        } else {
            p++;
            string a = str.substr(0, p);
            reverse(a.begin(), a.end());
            string b = str.substr(p);
            b += a;
            // debug(b);
            if (ok(b)) {
                ans = p;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}