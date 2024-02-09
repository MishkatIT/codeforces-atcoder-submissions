/*
    author    : MishkatIT
    created   : Friday 2024-02-09-16.25.26
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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = inf;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = 0;
                for (int k = 0; k < m; k++) {
                    temp += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, temp);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

