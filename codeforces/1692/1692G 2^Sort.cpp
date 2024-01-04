/*
    author    : MishkatIT
    created   : Thursday 2024-01-04-18.32.41
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
        vector<int> pref(n + 5);
        for (int i = 2; i <= n; i++) {
            int inc = (v[i - 1] * 2 > v[i - 2]);
            pref[i] = pref[i - 1] + inc;
        }
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (i >= k + 1) {
                ans += ((pref[i] - pref[i - k]) >= k);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


