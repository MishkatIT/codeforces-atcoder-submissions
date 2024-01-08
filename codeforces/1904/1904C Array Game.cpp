/*
    author    : MishkatIT
    created   : Monday 2024-01-08-22.45.13
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (k >= 3) {
            cout << 0 << '\n';
            continue;
        }
        sort(v.begin(), v.end());

        if (k == 1) {
            ll mn = v.front();
            for (int i = 0; i + 1 < n; i++) {
                mn = min(mn, v[i + 1] - v[i]);
            }
            cout << mn << '\n';
            continue;
        }
        ll mn = v.front();
        for (int i = 0; i + 1 < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll temp = v[j] - v[i];
                mn = min(mn, temp);
                auto it = lower_bound(v.begin(), v.end(), temp);
                if (it == v.end()) --it;
                mn = min(mn, abs(*it - temp));
                if (it != v.begin())--it;
                mn = min(mn, abs(*it - temp));
            }
        }
        cout << mn << '\n';
    }
    return 0;
}


