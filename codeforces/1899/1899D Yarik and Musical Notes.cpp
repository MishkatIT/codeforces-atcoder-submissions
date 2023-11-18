/*
    author    : MishkatIT
    created   : Saturday 2023-11-18-23.40.35
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
        map<int, ll> mp;
        for (auto& i : v) {
            mp[i]++;
        }
        ll ans = 0;
        for (auto& i : mp) {
            if (i.first == 1) {
                ans += (mp[1] * mp[2]);
            }
            ans += (i.second * (i.second - 1) / 2);
        }
        cout << ans << '\n';
    }
    return 0;
}


