/*
    author    : MishkatIT
    created   : Tuesday 2023-11-21-19.53.30
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
        for (int i = n - 1; i > 0; i--) {
            if (v[i - 1] > v[i]) {
                int x = ((v[i - 1] + v[i] - 1) / v[i]); //taking ceil.
                ans += (x - 1);
                v[i - 1] = v[i - 1] / x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


