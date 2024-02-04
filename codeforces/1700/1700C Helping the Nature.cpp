/*
    author    : MishkatIT
    created   : Sunday 2024-02-04-19.33.42
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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        ll op = 0;
        for (int i = 0; i + 1 < n; i++) {
            ll cur = v[i + 1] - op;
            if (v[i] == cur) {
                v[i + 1] = v[0];
                continue;
            }
            if (v[i] < cur) {
                ans += abs(cur - v[i]);
                op += abs(cur - v[i]);
            } else {
                ans += abs(v[i] - cur);
                v[0] -= abs(v[i] - cur);
            }
            v[i + 1] = v[0];
        }
        cout << ans + abs(v[0]) << '\n';
    }
    return 0;
}


