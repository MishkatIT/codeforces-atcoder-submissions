/*
    author    : MishkatIT
    created   : Thursday 2024-02-15-20.34.00
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
        ll n, k;
        cin >> n >> k;
        if (k <= ((n * 2) + (n - 2) * 2)) {
            cout << (k + 1) / 2 << '\n';
        } else {
            ll temp = ((n * 2) + (n - 2) * 2);
            ll ans = n + (n - 2);
            ans += (k - temp);
            cout <<  ans << '\n';
        }
    }
    return 0;
}

