/*
    author    : MishkatIT
    created   : Thursday 2023-10-12-21.41.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e6 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<ll> spf(N);

void sieve()
{
    for (ll i = 2; i < N; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (ll j = 2 * i; j < N; j += i) {
                if (spf[j] == 0) {
                    spf[j] = i;
//                    debug("dfd")
                }
            }
        }
    }
}



int main()
{
    fio;
    sieve();
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<ll, ll> mp;
        for (auto& i: v) {
            while (i != 1) {
                ll cnt = 0;
                ll factor = spf[i];
                while (i % factor == 0) {
                    i /= factor;
                    cnt++;
//                    debug("dfd")
                }
                mp[factor] += cnt;
//                debug("here")
            }
        }
        bool ok = true;
        for (auto & i: mp) {
            ok &= (i.second % n == 0);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

