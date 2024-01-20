/*
    author    : MishkatIT
    created   : Sunday 2024-01-21-01.35.49
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
        vector<int> v(n + 5);
        for (int i = 1; i <= n; i++) cin >> v[i];

        vector<bool> closest(n + 5, false);
        closest[1] = true;
        for (int i = 2; i + 1 <= n; i++) {
            if (v[i] - v[i - 1] > v[i + 1] - v[i]) closest[i] = true;
        }
        vector<ll> pref(n + 5), suf(n + 5);
        for (int i = 1; i <= n; i++) {
            int x;
            if (closest[i]) {
                x = 1;
            } else {
                x = v[i + 1] - v[i];
            }
            pref[i] = pref[i - 1] + x;
        }
        for (int i = n; i > 0; i--) {
            int x;
            if (!closest[i]) {
                x = 1;
            } else {
                x = v[i] - v[i - 1];
            }
            suf[i] = suf[i + 1] + x;
        }

        int m;
        cin >> m;
        while (m--) {
            int x, y;
            cin >> x >> y;
            if (x < y) {
                cout << pref[y - 1] - pref[x - 1] << '\n';
            } else {
                cout << suf[y + 1] - suf[x + 1] << '\n';
            }
        }
    }
    return 0;
}


