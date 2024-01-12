/*
    author    : MishkatIT
    created   : Friday 2024-01-12-16.04.18
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        int r = 0, x = 0;
        while(r < n) {
            if (v[r] > x) {
                x++;
                ans += x;
                r++;
            } else {
                x--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

