/*
    Author    : MishkatIT
    Created   : Wednesday 26-06-2024 18:14:08
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
        if (n == 2) {
            cout << stoi(str) << '\n';
        } else if (n == 3) {
            int a = str[0] - '0', b = str[1] - '0', c = str[2] - '0';
            int ans = inf;
            ans = min(ans, a * (b * 10 + c));
            ans = min(ans, a + (b * 10 + c));
            ans = min(ans, (a * 10 + b) * c);
            ans = min(ans, (a * 10 + b) + c);
            cout << ans << '\n';
        } else {
            if (find(str.begin(), str.end(), '0') != str.end()) {
                cout << 0 << '\n';
            } else {
                int sum = 0;
                for (auto& i : str) {
                    if (i != '1') sum += i - '0';
                }
                int ans = inf;
                for (int i = 0; i + 1 < n; i++) {
                    int a = str[i] - '0', b = str[i + 1] - '0';
                    if (a != 1) sum -= a;
                    if (b != 1) sum -= b;
                    sum += (a * 10 + b);
                    ans = min(ans, sum);
                    sum -= (a * 10 + b);
                    if (a != 1) sum += a;
                    if (b != 1) sum += b;
                }
                cout << ans << '\n';
            }
        }
    }
    return 0;
}