/*
    author    : MishkatIT
    created   : Sunday 2024-04-07-05.02.44
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        ll ans = 0, ex = 0;
        for (int i = 0; i < n; i++) {
            ll cur = min(m, k);
            ans += cur * (v[i] + ex);
            ex += cur;
            k -= cur;
        }
        cout << ans << '\n';
    }
    return 0;
}


