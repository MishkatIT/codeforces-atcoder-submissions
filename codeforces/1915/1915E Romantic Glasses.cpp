/*
    author    : MishkatIT
    created   : Saturday 2023-12-30-01.01.59
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
        ll odd = 0, even = 0;
        bool ok = false;
        map<ll, bool> mp;
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                odd += v[i];
            } else {
                even += v[i];
            }
            ll dif = odd - even;
            if (dif == 0) {
                ok = true;
                break;
            }
            if (mp.find(dif) != mp.end()) {
                ok = true;
                break;
            }
            mp[dif] = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


