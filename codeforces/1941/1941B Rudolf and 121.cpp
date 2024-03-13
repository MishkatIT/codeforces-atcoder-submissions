/*
    author    : MishkatIT
    created   : Tuesday 2024-03-12-18.42.57
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
        bool ok = true;
        for (int i = 1; i + 1 < n; i++) {
            if (v[i] == 0) continue;
            v[i] -= v[i - 1]  * 2;
            v[i + 1] -= v[i - 1];
            v[i - 1] = 0;
            if (v[i] < 0) ok = false;
        }
        for (auto& i : v) {
            ok &= (i == 0);
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

