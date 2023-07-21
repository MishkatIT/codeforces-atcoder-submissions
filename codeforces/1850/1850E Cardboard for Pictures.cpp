/*
    author    : MishkatIT
    created   : Friday 2023-07-21-22.20.28
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

#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            c -= (v[i] * v[i]);
        }
        c /= (4 * n);
        int tot = accumulate(v.begin(), v.end(), 0LL);
        tot /= (2 * n);
        cout << (ll) sqrtl(tot * tot + c) - tot << '\n';
    }
    return 0;
}
