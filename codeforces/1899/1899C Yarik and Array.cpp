/*
    author    : MishkatIT
    created   : Friday 2023-11-17-21.45.48
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;

ll maxSubArraySum(ll a[], ll x, ll y)
{
//    cout << "sdfdsf" << x << ' ' << y << '\n';
    ll mx_ = a[x], mx_end = a[x];

    for (ll i = x + 1; i < y; i++) {
        mx_end = max(a[i], mx_end + a[i]);
        mx_ = max(mx_, mx_end);
//        cout << "dfd" << mx_ << ' ';
    }
    return mx_;
}



int main()
{
    fio;
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll v[n];
        for(ll i = 0; i < n; i++)
            cin >> v[i];
        ll ans = *max_element(v, v + n);
        ll l = 0, r = l + 1;
        int x = (abs(v[l]) & 1);
//        cout << "xxxxxxx" << x << '\n';
        ll sum = v[l];
        while(r < n) {
           if((abs(v[r]) % 2) != x) {
//            cout << v[r] << ' ';
            r++;
//            cout << (v[r] % 2) << ' ';
//            cout << "xx"<< x << '\n';
            x ^= 1;
//
           } else {
            ll xx = maxSubArraySum(v, l, r);
            ans = max(ans, xx);
            l = r;
            x = (abs(v[l]) & 1);
            r++;
           }
        }
        ll xx = maxSubArraySum(v, l, r);
        ans = max(ans, xx);
        cout << ans << '\n';
    }

    return 0;
}
