/*
    author    : MishkatIT
    created   : Friday 2024-03-01-19.39.27
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
        map<ll, int> mp;
        for (int i = 0; i < n; i++) {
            mp[v[i] + i + 1]++;
        }
        vector<ll> ans;
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            if (it -> second > 0) {
                ans.push_back(it -> first);
                mp[it -> first - 1] += it -> second - 1;
            }
        }
        sort(ans.rbegin(), ans.rend());
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}


