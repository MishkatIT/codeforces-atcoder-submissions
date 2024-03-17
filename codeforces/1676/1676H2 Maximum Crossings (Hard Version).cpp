/*
    author    : MishkatIT
    created   : Monday 2024-03-18-00.48.23
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end(), [&](auto& a, auto& b) {
            return (a.first < b.first) || (a.first == b.first && a.second > b.second);
        });
        tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> s;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += s.size() - s.order_of_key(v[i].second);
            s.insert(v[i].second);
        }
        cout << ans << '\n';
    }
    return 0;
}

