/*
    author    : MishkatIT
    created   : Friday 2023-10-13-21.34.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        vector<ll> dp(n + 1, inf);
        dp[0] = 0;
        for (int i = 0; i < n; i++) {
            if(i + v[i] + 1 <= n) {
                dp[i + v[i] + 1] = min(dp[i + v[i] + 1], dp[i]);
            }
            dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        }
        cout << dp[n] << '\n';
    }
    return 0;
}

