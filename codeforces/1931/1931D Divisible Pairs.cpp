/*
    author    : MishkatIT
    created   : Thursday 2024-02-15-18.05.48
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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        ll ans = 0;
        for (auto& i : v) cin >> i;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < n; i++) {
            int a = v[i] % x;
            int b = v[i] % y;
            ans += mp[{(x - a) % x, b}];
            mp[{a, b}]++;
        }
        cout << ans << '\n';
    }
    return 0;
}


