/*
    author    : MishkatIT
    created   : Tuesday 2023-10-24-23.35.23
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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        ll cnt = 0;
        for (int i = 1; i < n; i++) {
            ll temp = v[i];
            while(cnt > 0 && temp >= 2 * v[i - 1]) {
                cnt--;
                temp /= 2;
            }
            while(temp < v[i - 1]) {
                cnt++;
                temp *= 2;
            }
            ans += cnt;
        }
        cout << ans << '\n';
    }
    return 0;
}

