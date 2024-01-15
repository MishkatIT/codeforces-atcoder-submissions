/*
    author    : MishkatIT
    created   : Monday 2024-01-15-21.36.54
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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> v(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            ll x = abs(v[i] - v[i + 1]) * a;
            ll mn = min(x, b);
            if (f > mn) {
                f -= mn;
            } else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

