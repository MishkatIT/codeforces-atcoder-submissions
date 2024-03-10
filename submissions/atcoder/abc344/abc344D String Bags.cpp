/*
    author    : MishkatIT
    created   : Sunday 2024-03-10-20.58.25
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
    string t;
    cin >> t;
    int n;
    cin >> n;
    vector<vector<string>> v(n);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v[i].resize(m);
        for (auto& j : v[i]) {
            cin >> j;
        }
    }
    vector<int> dp(t.size() + 5, inf);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = t.size(); j >= 0; j--) {
            for (auto& cur : v[i]) {
                if (j + cur.size() <= t.size() && dp[j] != inf) {
                    bool ok = true;
                    for (int x = 0; x < cur.size(); x++) {
                        ok &= (t[j + x] == cur[x]);
                    }
                    if (ok) {
                        dp[j + cur.size()] = min(dp[j + cur.size()], dp[j] + 1);
                    }
                }
            }
        }
    }
    if (dp[t.size()] != inf) {
        cout << dp[t.size()];
    } else {
        cout << -1;
    }
    return 0;
}


