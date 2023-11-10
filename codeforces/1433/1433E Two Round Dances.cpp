/*
    author    : MishkatIT
    created   : Friday 2023-11-10-17.31.21
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
    ll n;
    cin >> n;
    vector<ll> fact(n + 10);
    fact[0] = 1;
    for (ll i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }
    ll ans = fact[n] / (fact[n / 2] * fact[(n - n / 2)]);
    ans /= 2;
    ans *= (fact[n / 2 - 1]) * (fact[n / 2 - 1]);
    cout << ans;
    return 0;
}