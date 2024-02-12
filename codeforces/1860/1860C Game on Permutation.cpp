/*
    author    : MishkatIT
    created   : Monday 2024-02-12-18.45.42
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
        int ans = 0;
        int mn = inf, mnWin = inf;
        for (int i = 0; i < n; i++) {
            if (mn < v[i] && mnWin > v[i]) {
                ans++;
                mnWin = v[i];
            }
            mn = min(mn, v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}


