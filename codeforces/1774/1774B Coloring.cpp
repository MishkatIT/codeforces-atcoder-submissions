/*
    author    : MishkatIT
    created   : Monday 2023-11-13-17.46.30
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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(m);
        for (auto& i : v) {
            cin >> i;
        }
        ll req = (n + k - 1) / k;
        int cnt = 0;
        ll mx = -1;
        for (int i = 0; i < m; i++) {
            cnt += (v[i] == req);
            mx = max(mx, v[i]);
        }
        bool ok = true;
        if (n % k == 0) {
            if (mx > req) {
                ok = false;
            }
        } else {
            if (cnt > (n % k) || mx > req) {
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


