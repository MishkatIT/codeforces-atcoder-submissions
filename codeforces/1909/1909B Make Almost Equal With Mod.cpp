/*
    author    : MishkatIT
    created   : Sunday 2023-12-24-20.03.12
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
        ll ans = -1;
        ll x = 2;
        while(x) {
            set<ll> s;
            for (auto& i : v) {
                s.insert(i % x);
            }
            if (s.size() == 2) {
                ans = x;
                break;
            }
            x *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}


