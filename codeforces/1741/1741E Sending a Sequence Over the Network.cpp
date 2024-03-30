/*
    author    : MishkatIT
    created   : Sunday 2024-03-31-03.46.16
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
        int n;
        cin >> n;
        vector<int> v(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        vector<bool> dp(n + 5);
        dp[0] = true;
        for (int i = 1; i <= n; i++) {
            if (i + v[i] <= n && dp[i - 1]) {
                dp[i + v[i]] = true;
            }
            if (i - v[i] >= 1 && dp[i - v[i] - 1]) {
                dp[i] = true;
            }
        }

        cout << (dp[n] ? "YES" : "NO") << '\n';
    }
    return 0;
}


