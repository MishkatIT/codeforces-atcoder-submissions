/*
    author    : MishkatIT
    created   : Thursday 2023-11-16-21.04.31
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
        ll n, w;
        cin >> n >> w;
        vector<ll> a(n), b(n);
        for (auto& i : a) {
            cin >> i;
            w += i;
        }
        for (auto& i : b) cin >> i;
        vector<pair<ld, ld>> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {a[i], b[i]};
        }
        auto cmp = [&](auto x, auto y) {
            return (x.first + x.second > y.first + y.second);
        };

        sort (v.begin(), v.end(), cmp);

        ll sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (sum < w) {
                sum += v[i].second;
                w -= v[i].first;
                ans++;
            } else break;
        }
        if (sum < w) {
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }

    }
    return 0;
}