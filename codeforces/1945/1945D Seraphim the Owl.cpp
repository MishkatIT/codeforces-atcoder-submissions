/*
    author    : MishkatIT
    created   : Friday 2024-03-22-16.37.14
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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        for (auto& i : a) cin >> i;
        for (auto& i : b) cin >> i;
        ll ans = linf;
        ll suf = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (i < m) ans = min(ans, a[i] + suf);
            suf += min(a[i], b[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}


