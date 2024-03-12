/*
    author    : MishkatIT
    created   : Tuesday 2024-03-12-20.03.32
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
        int n, m, k, d;
        cin >> n >> m >> k >> d;
        int arr[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        vector<ll> pref(n + 5);
        for (int i = 0; i < n; i++) {
            set<pair<ll, int>> s; // cost, index.
            s.insert({1, 0});
            ll temp = 0;
            for (int j = 0; j < m; j++) {
                while(!s.empty() && j - s.begin() -> second - 1 > d) {
                    s.erase(s.begin());
                }
                temp = s.begin() -> first + arr[i][j] + 1;
                s.insert({temp, j});
            }
            pref[i + 1] = temp;
        }
        for (int i = 1; i <= n; i++) {
            pref[i] += pref[i - 1];
        }
        ll ans = linf;
        for (int i = 1; i <= n; i++) {
            if (i >= k) {
                ans = min(ans, pref[i] - pref[i - k]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

