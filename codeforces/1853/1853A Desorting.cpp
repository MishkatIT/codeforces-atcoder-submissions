/*
    author    : MishkatIT
    created   : Tuesday 2024-04-09-19.31.20
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
        int mn = inf;
        bool sorted = true;
        for (int i = 0; i + 1 < n; i++) {
            if (v[i + 1] >= v[i]) {
                mn = min(mn, v[i + 1] - v[i]);
            } else {
                sorted = false;
            }
        }
        if (!sorted) {
            cout << 0 << '\n';
        } else {
            cout << (mn + 2) / 2 << '\n';
        }
    }
    return 0;
}


