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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> temp[n + 5];
        for (int i = 0; i < n; i++) {
            temp[v[i]].push_back(i + 1);
        }
        for (int i = 1; i <= n; i++) {
            sort(temp[i].rbegin(), temp[i].rend());
        }
        vector<int> c;
        for (int i = 1; i <= n; i++) {
            for (auto& x : temp[i]) {
                c.push_back(x);
            }
        }
        tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> s;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += s.size() - s.order_of_key(c[i]);
            s.insert(c[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
