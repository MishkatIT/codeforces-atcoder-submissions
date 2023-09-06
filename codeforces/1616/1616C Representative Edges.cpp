/*
    author    : MishkatIT
    created   : Tuesday 2023-09-05-20.08.35
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld      = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = inf;
        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n; j++) {
                ll temp = 0;

                for (ll k = 0; k < n; k++) {
                    if(v[k] * (j - i) != ((j - i) * v[i] - i * (v[j] - v[i]) + k * (v[j] - v[i]))) {
                        temp++;
                    }
                }
                ans = min(ans, temp);
            }
        }
        ans = max((ll)0, ans);
        if(ans == inf) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}

//precision error fixed.
