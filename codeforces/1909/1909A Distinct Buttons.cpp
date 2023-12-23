/*
    author    : MishkatIT
    created   : Saturday 2023-12-23-20.35.05
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
        int u, d, l, r;
        u = d = l = r = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x == 0 && y == 0) continue;
            if (x > 0) r = 1;
            if (y > 0) u = 1;
            if (x < 0) l = 1;
            if (y < 0) d = 1;
        }
        cout << ((r + u + l + d < 4) ? "YES" : "NO") << '\n';
    }
    return 0;
}

