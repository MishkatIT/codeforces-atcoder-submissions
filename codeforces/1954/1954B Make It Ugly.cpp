/*
    author    : MishkatIT
    created   : Saturday 2024-04-13-12.48.12
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
        set<int> s(v.begin(), v.end());
        if (s.size() == 1) {
            cout << -1 << '\n';
            continue;
        }
        if (n == 2) {
            cout << 0 << '\n';
        }
        int ans = inf;
        int cnt = 1;
        for (int i = 0; i + 1 < n; i++) {
            if (v[i] == v[i + 1]) cnt++;
            else {
                ans = min(ans, cnt);
                cnt = 1;
                i++;
            }
        }
        ans = min(ans, cnt);
        cout << ans << '\n';
    }
    return 0;
}


