/*
    author    : MishkatIT
    created   : Monday 2023-12-18-14.31.00
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
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int mx = 0;
        int x = l;
        while(x <= r) {
            mx++;
            x *= 2;
        }
        int low = l, high = l * (1 << mx);
        int temp = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if (mid * (1 << mx - 1) <= r) {
                temp = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        int ans = 0;
        if (temp != -1) {
            ans += (temp - l + 1);
        }

        low = l, high = l * (1 << mx);
        temp = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if (mid * (1 << max(0LL, mx - 2)) * 3 <= r) {

                temp = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (temp != -1) {
            ans += (temp - l + 1) * (mx - 1);
        }
        cout << mx << ' ' << ans << '\n';
    }
    return 0;
}


