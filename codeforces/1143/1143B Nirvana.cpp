/*
    author    : MishkatIT
    created   : Sunday 2023-10-01-16.47.59
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

ll best(ll n)
{
    ll p = 1;
    while(n) {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int main()
{
    fio;
    ll n;
    cin >> n;
    ll p = 1;
    ll ans = 0;
    ++n;
    while(n) {
        ans = max(ans, best(n * p - 1));
        n /= 10;
        p *= 10;
    }
    cout << ans;
    return 0;
}
