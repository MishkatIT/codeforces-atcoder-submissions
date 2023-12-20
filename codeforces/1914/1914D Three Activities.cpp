/*
    author    : MishkatIT
    created   : Wednesday 2023-12-20-01.22.24
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
        vector<vector<pair<ll, int>>> v(3, vector<pair<ll, int>> (n));
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j].first;
                v[i][j].second = j;
            }
        }
        for (int i = 0; i < 3; i++) {
            sort(v[i].rbegin(), v[i].rend());
        }

        ll ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (v[0][i].second != v[1][j].second && v[1][j].second != v[2][k].second && v[2][k].second != v[0][i].second) {
                        ans = max(ans, v[0][i].first + v[1][j].first + v[2][k].first);
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
