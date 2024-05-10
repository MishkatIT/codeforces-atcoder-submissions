/*
    Author    : MishkatIT
    Created   : Saturday 11-05-2024 01:33:39
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }
        map<int, pair<vector<int>, vector<int>>> mp; // type, value, index
        for (int i = 0; i < n; i++) {
            mp[v[i] / 4].first.push_back(v[i]);
            mp[v[i] / 4].second.push_back(i);
        }
        for (auto &i : mp) {
            sort(i.second.first.begin(), i.second.first.end());
            sort(i.second.second.begin(), i.second.second.end());
        }
        vector<int> ans(n);
        for (auto &i : mp) {
            for (int j = 0; j < i.second.second.size(); j++) {
                ans[i.second.second[j]] = i.second.first[j];
            }
        }
        int sz = ans.size();
        for (int i = 0; i < sz; i++) {
            cout << ans[i] << " \n"[i == sz - 1];
        }
    }
    return 0;
}