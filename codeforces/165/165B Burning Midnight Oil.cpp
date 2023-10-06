/*
    author    : MishkatIT
    created   : Saturday 2023-10-07-01.28.40
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
    ll n, k;
    cin >> n >> k;
    ll ans = linf;
    ll low = 0, high = linf;
    while(low <= high) {
        ll mid = low + (high - low) / 2LL;
        ll nn = 0;
        ll kk = 1;
        ll midd = mid;
        while(midd / kk > 0) {
            nn += (midd / kk);
            kk *= k;
        }

        if(nn >= n) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
