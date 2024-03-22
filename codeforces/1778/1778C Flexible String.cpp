/*
    author    : MishkatIT
    created   : Tuesday 2024-03-12-15.45.05
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        set<char> s(a.begin(), a.end());
        int m = s.size();
        if (k >= m) {
            cout << 1LL * n * (n + 1) / 2 << '\n';
            continue;
        }
        vector<char> x(s.begin(), s.end());
        ll ans = 0;
        for (int i = 1; i <= (1 << m); i++) {
            vector<bool> temp(26);
            if (__builtin_popcount(i) <= k) {
                for (int j = 0; j < m; j++) {
                    if (i & (1 << j)) {
                        temp[x[j] - 'a'] = true;
                    }
                }
            }
            ll cnt = 0, tans = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == b[i] || temp[a[i] - 'a']) {
                    cnt++;
                    tans += cnt;
                } else {
                    cnt = 0;
                }
            }
            ans = max(ans, tans);

        }
        cout << ans << '\n';
    }
    return 0;
}