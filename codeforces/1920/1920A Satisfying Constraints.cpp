/*
    author    : MishkatIT
    created   : Saturday 2024-01-13-20.33.54
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
        vector<int> v;
        int mn = -1;
        int mx = inf + 3;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if (x == 3) {
                v.push_back(y);
            } else if (x == 1) {
                mn = max(mn, y);
            } else {
                mx = min(mx, y);
            }
        }
//        debug(mn)debug(mx)
        int ans = mx - mn + 1;
        for (auto& i : v) {
            if (i >= mn && i <= mx) {
                ans--;
            }
        }
        cout << max(0, ans) << '\n';
    }
    return 0;
}

