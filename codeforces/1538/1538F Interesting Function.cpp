/*
    author    : MishkatIT
    created   : Friday 2023-08-04-14.37.10
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
        ll l, r;
        cin >> l >> r;
        ll ans = 0;
        while(r) {
            ans += r - l;
            l /= 10;
            r /= 10;
        }
        cout << ans << '\n';
    }
    return 0;
}

