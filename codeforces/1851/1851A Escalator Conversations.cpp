/*
    author    : MishkatIT
    created   : Wednesday 2023-07-26-21.32.07
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 3e3;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vector<int> v(n);
        for (auto& i: v) {
            cin >> i;
        }

        map<int, bool> mp;
        for (int i = 1; i <= m; i++) {
            for (int j = i + 1; j <= m; j++) {
                int x = (j - i) * k;
                mp[x] = true;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mp[abs(v[i] - h)];
        }
        cout << ans << '\n';
    }
    return 0;
}

