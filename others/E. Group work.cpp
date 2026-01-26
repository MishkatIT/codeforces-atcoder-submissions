/*
    author    : MishkatIT
    created   : Monday 2023-11-13-01.15.19
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


ll nCr(ll n, ll r)
{
    if (r > n) return 0;

    if (r > n / 2) r = n - r;

    ll result = 1;

    // Calculate C(n, r) using Pascal's Identity.
    for (ll i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}

int main()
{
    ll n;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }
    ll ans = 0;
    for (ll i = 2; i <= n; i++) {
        ans += nCr(n, i);
    }

    cout << ans;

    return 0;
}

/*
    https://codeforces.com/gym/101879/problem/E
*/

