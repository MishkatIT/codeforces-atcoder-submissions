/*
    author    : MishkatIT
    created   : Tuesday 2023-08-15-01.21.31
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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort (v.begin(), v.end(), [&] (auto a, auto b) {
        return (a.first - a.second) > (b.first - b.second);
    });
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (v[i].first * i + v[i].second * (n - i - 1));
    }
    cout << ans;
    return 0;
}
