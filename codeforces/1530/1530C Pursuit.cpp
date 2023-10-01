/*
    author    : MishkatIT
    created   : Sunday 2023-10-01-21.41.17
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
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<ll> b(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<ll> sufa(n + 5), sufb(n + 5);
        for (ll i = n; i > 0; i--) {
            sufa[i] = sufa[i + 1] + a[i];
        }
        for (ll i = n; i > 0; i--) {
            sufb[i] = sufb[i + 1] + b[i];
        }

        auto ok = [&](ll xtra) -> bool {
            ll round = n + xtra;
            ll take = round - (round / 4LL);
            ll scoreA = 0LL, scoreB = sufb[max(n - take + 1, 1LL)];
            scoreA += 100 * min(take, xtra);
            if(xtra < take)
            {
                scoreA += sufa[n - (take - xtra - 1)];
            }
            return (scoreA >= scoreB);
        };

        ll low = 0, high = (ll)1e15;
        ll ans = 0;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            if(ok(mid)) {
                ans = mid;
                high = mid - 1LL;
            } else {
                low = mid + 1LL;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

