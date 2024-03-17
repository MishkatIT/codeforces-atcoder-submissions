/*
    author    : MishkatIT
    created   : Monday 2024-03-18-00.48.23
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
        set<int> s;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += distance(s.upper_bound(c[i]), s.end()); // inversion count. 
            s.insert(c[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}


