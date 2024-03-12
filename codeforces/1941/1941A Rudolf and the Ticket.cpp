/*
    author    : MishkatIT
    created   : Tuesday 2024-03-12-18.36.56
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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (auto& i : a) {
            cin >> i;
        }
        for (auto& i : b) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans += (a[i] + b[j] <= k);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

