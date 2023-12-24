/*
    author    : MishkatIT
    created   : Monday 2023-12-25-00.51.02
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
        vector<pair<int, int>> v;
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            v.push_back({x, (i < n ? 1 : -1)});
        }

        vector<int> c(n);
        for (auto& i : c) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        stack<int> s;
        vector<int> f;
        for (auto& i : v) {
            if (i.second == 1) {
                s.push(i.first);
            } else {
                f.push_back(i.first - s.top());
                s.pop();
            }
        }
        sort(f.rbegin(), f.rend());
        sort(c.begin(), c.end());
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += f[i] * 1LL * c[i];
        }
        cout << ans << '\n';
    }
    return 0;
}

