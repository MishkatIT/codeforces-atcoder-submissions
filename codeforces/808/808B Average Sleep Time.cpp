/*
    author    : MishkatIT
    created   : Friday 2024-01-12-17.49.35
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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<ll> pref(n + 5);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    ld ans = 0;
    for (int i = k; i <= n; i++) {
        ans += (pref[i] - pref[i - k]);
    }
    cout << fixed << setprecision(13) << ans / (n - k + 1) << '\n';
    return 0;
}


