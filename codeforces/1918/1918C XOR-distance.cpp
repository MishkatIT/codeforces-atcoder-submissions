/*
    author    : MishkatIT
    created   : Wednesday 2024-01-31-21.57.28
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
        ll a, b, r;
        cin >> a >> b >> r;
        if (a < b) {
            swap(a, b);
        }
        ll x = 0;
        bool taken = false;
        for (ll i = 63; i >= 0; i--) {
            ll mask = 1LL << i;
            if (((mask & a) != 0) && ((mask & b) == 0)) {
                if (!taken) taken = true;
                else if ((x | mask) <= r) x |= mask;
            }
        }
        cout << abs((a ^ x) - (b ^ x)) << '\n';
    }
    return 0;
}
