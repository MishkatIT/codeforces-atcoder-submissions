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
    ll t;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());

    map<ll, ll> mp;
    ll x = v.front();
    for (ll i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            int cnt = 0;
            while(x % i == 0) {
                cnt++;
                x /= i;
            }
            mp[i] = cnt;
        }
    }
    if (x > 1) {
        mp[x] = 1;
    }

    for (auto& i: v) {
        for (auto& x : mp) {
            ll cnt = 0;
            while(i % x.first == 0) {
                i /= x.first;
                cnt++;
            }
            x.second = min(x.second, cnt);
        }
    }

    ll ans = 1;
    for (auto& i: mp) {
        ans *= (i.second + 1);
    }
    cout << ans;
    return 0;
}
