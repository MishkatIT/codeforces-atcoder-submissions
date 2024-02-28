/*
    author    : MishkatIT
    created   : Wednesday 2024-02-28-09.58.44
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<ll> pref(n + 1);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + v[i - 1];
        }

        int q;
        cin >> q;
        while(q--) {
            ll l, u;
            cin >> l >> u;
            ll uu = u;
            u += pref[l - 1];
            int pos = lower_bound(pref.begin() + l, pref.end(), u) - (pref.begin() + l) + l;
            if (pos == l) {
                cout << pos << ' ';
            } else if (pos > n) {
                cout << pos - 1 << ' ';
            } else if (pref[pos] == u) {
                cout << pos << ' ';
            } else {
                ll x = pref[pos] - u;  // extra
                ll y = pref[pos] - pref[pos - 1] - x;
                x--;
                ll p = y * (y + 1) / 2LL;
                ll n = x * (x + 1) / 2LL;
                if (p > n) {
                    cout << pos << ' ';
                } else {
                    cout << pos - 1 << ' ';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}


