/*
    Author    : MishkatIT
    Created   : Friday 10-05-2024 20:41:43
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
        int n = str.size();
        int mx = 1;
        int s = n, e = n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int temp = 1;
            int j = i;
            int cnt = 0;
            while (j + 1 < n && str[j] <= str[j + 1]) {
                cnt += (str[j] < str[j + 1]);
                j++;
                temp++;
                if (temp > mx && cnt) {
                    ans = 1;
                    mx = temp;
                    s = i, e = j;
                }
            }
            i = j;
        }
        for (int i = 0; i < s; i++) {
            ans++;
            int j = i;
            while (j + 1 < s && str[j] == str[j + 1]) {
                j++;
            }
            i = j;
        }
        // debug(ans);
        for (int i = e + 1; i < n; i++) {
            ans++;
            int j = i;
            while (j + 1 < n && str[j] == str[j + 1]) {
                j++;
            }
            i = j;
        }
        cout << ans << '\n';
    }
    return 0;
}