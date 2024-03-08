/*
    author    : MishkatIT
    created   : Friday 2024-03-08-17.35.19
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
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, l;
        cin >> n >> l;
        vector<pair<int, int>> v(n);
        for (auto& i : v) {
            cin >> i.first >> i.second;
        }

        auto cmp = [&](auto& a, auto& b) {
            return (a.second < b.second);
        };
        sort(v.begin(), v.end(), cmp);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            multiset<pair<int, int>> ms, temp;
            ll sum = 0;
            for (int j = i; j < n; j++) {
                ms.insert(v[j]);
                sum += v[j].first;
                if ((sum + v[j].second - v[i].second) > l) {
                    auto b = ms.end();
                    --b;
                    if (*b == v[i]) break;
                    sum -= b -> first;
                    ms.erase(b);
                }
                ans = max(ans, (int)ms.size());
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

