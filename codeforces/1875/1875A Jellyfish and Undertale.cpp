/*
    author    : MishkatIT
    created   : Sunday 2023-10-01-03.40.59
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
        ll a, b, n;
        cin >> a >> b >> n;
        ll ans = b;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            ans += min(a - 1, x);
        }
        cout << ans << '\n';
    }
    return 0;
}
