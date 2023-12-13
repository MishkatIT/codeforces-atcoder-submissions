/*
    author    : MishkatIT
    created   : Tuesday 2023-12-12-21.49.41
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
        vector<pair<int, int>> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        vector<ll> pref(n + 5);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + v[i].first;
        }
        vector<int> ans(n + 5);
        ans[v[n].second] = n - 1;
        for (int i = n - 1; i > 0; i--) {
            if (pref[i] >= v[i + 1].first) {
                ans[v[i].second] = ans[v[i + 1].second];
            } else {
                ans[v[i].second] = i - 1;
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}


