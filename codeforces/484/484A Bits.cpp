/*
    author    : MishkatIT
    created   : Monday 2023-11-20-22.55.44
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
        ll l, r;
        cin >> l >> r;
        ll ans = l;
        for (int i = 0; i < 64; i++) {      // traversing from left to find the least significant unset bit. (because it requires to take the smaller number if there are multiple options)
            if ((l & (1LL << i)) == 0) {    // trying to set the bit if it's not set yet,
                l |= (1LL << i);
                if (l <= r) {
                    ans = l;
                } else {
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


