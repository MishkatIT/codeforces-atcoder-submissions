/*
    author    : MishkatIT
    created   : Tuesday 2024-03-26-00.15.33
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
        int n, x, m;
        cin >> n >> x >> m;
        int left = x, right = x;
        while(m--) {
            int l, r;
            cin >> l >> r;
            if (l <= right && r >= left) {
                left = min(left, l);
                right = max(right, r);
            }
        }
        cout << right - left + 1 << '\n';
    }
    return 0;
}


