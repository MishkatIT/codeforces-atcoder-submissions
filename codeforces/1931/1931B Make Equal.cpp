/*
    author    : MishkatIT
    created   : Tuesday 2024-02-13-20.42.39
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll sum = 0;
        for (auto& i : v) {
            cin >> i;
            sum += i;
        }
        ll avg = sum / n;
        for (int i = n - 1; i > 0; i--) {
            if (v[i] < avg) {
                v[i - 1] -= (avg - v[i]);
                v[i] = avg;
            }
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            ok &= (v[i] == avg);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

