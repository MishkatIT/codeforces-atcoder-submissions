/*
    author    : MishkatIT
    created   : Friday 2023-12-29-17.58.40
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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
        vector<pair<int, int>> v(n);
        for (auto& i : v) {
            cin >> i.first >> i.second;
        }
        sort(v.begin(), v.end());
        ordered_set os;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans += os.order_of_key(v[i].second);
            os.insert(v[i].second);
        }
        cout << ans << '\n';
    }
    return 0;
}


