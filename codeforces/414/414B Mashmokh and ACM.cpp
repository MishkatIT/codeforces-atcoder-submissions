/*
    author    : MishkatIT
    created   : Tuesday 2023-11-07-19.09.25
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

ll dp[2010][2010];

ll good (ll n, ll k, ll i)
{
    if(k <= 0) {
        return 1;
    }
    if(dp[i][k] != -1) {
        return dp[i][k];
    }
    int ans = 0;
    for (ll j = i; j <= n; j += i) {
        if(j % i == 0) {
            ans = ans % mod + good(n, k - 1, j) % mod;
        }
    }
    dp[i][k] = ans % mod;
    return dp[i][k];
}

int main()
{
    fio;
    ll n, k;
    memset(dp, -1, sizeof(dp));
    cin >> n >> k;
    cout << good(n, k, 1);
    return 0;
}

