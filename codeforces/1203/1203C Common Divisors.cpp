/*
    author    : MishkatIT
    created   : Wednesday 2023-10-11-23.42.16
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
    int n;
    cin >> n;
    ll g = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        g = __gcd(g, x);
    }

    int ans = 0;
    for (ll i = 1; i * i <= g; i++) {
        if(g % i == 0) {
            ans++;
            ans += (g / i != i);
        }
    }
    cout << ans;
    return 0;
}
