/*
    author    : MishkatIT
    created   : Saturday 2024-02-10-23.51.33
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<int, bool> mp;
        for (auto& i : v) {
            mp[i] = true;
        }
        bool ok = false;
        for (auto& i : v) {
            if (mp.find(i - k) != mp.end()) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


