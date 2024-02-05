/*
    author    : MishkatIT
    created   : Monday 2024-02-05-23.33.29
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
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        vector<ll> suf(n);
        suf.back() = v.back();
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + v[i];
        }

        ll ans = 0;
        for (int i = n - 1; i > 0; i--) {
            if (suf[i] > 0) {
                ans += suf[i];
            }
        }
        cout << suf.front() + ans << '\n';
    }
    return 0;
}


