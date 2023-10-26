/*
    author    : MishkatIT
    created   : Monday 2023-10-23-20.25.23
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
    int t;
    cin >> t;
    while(t--) {
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.rbegin(), v.rend());
        vector<ll> pref(n + 10);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + v[i - 1];
        }

        if(v.front() * d < c) {
            cout << "Impossible" << '\n';
            continue;
        }

        if(pref[min(d, n)] >= c) {
            cout << "Infinity" << '\n';
            continue;
        }

        ll low = 1, high = linf;
        ll k = 0;
        while(low <= high) {
            ll mid = low + (high - low) / 2LL;
            ll coin = 0;
            coin += (d / mid) * pref[min(n, mid)];
            coin += pref[min(n, (d % mid))];
            if(coin >= c) {
                k = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << k - 1 << '\n';
    }
    return 0;
}

