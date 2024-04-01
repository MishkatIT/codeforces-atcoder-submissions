/*
    author    : MishkatIT
    created   : Tuesday 2024-04-02-03.23.19
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
        map<int, int> first, last;
        for (int i = 0; i < n; i++) {
            if (first.find(v[i]) == first.end()) {
                first[v[i]] = i;
                last[v[i]] = i;
            } else {
                last[v[i]] = i;
            }
        }
        ll ans = 0, cur = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (last[v[i]] == i) cur++;
            if (first[v[i]] == i) ans += cur;
        }
        cout << ans << '\n';
    }
    return 0;
}

