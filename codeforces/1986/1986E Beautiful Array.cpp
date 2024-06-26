/*
    Author    : MishkatIT
    Created   : Wednesday 26-06-2024 19:32:27
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }
        map<int, vector<int>> mp;
        for (auto &i : v) {
            mp[i % k].push_back(i);
        }
        int odd = 0;
        for (auto &i : mp) {
            odd += ((int)i.second.size() & 1);
        }
        if ((n % 2 == 0 && odd) || odd > 1) {
            cout << -1 << '\n';
            continue;
        }
        ll ans = 0;
        for (auto &i : mp) {
            sort(i.second.begin(), i.second.end());
            int sz = i.second.size();
            for (int j = 0; j + 1 < sz; j += 2) {
                ans += (i.second[j + 1] - i.second[j]);
            }
            if ((sz & 1) && (sz > 1)) {
                ll temp = ans;
                int idx = sz - 1;
                while (idx > 0) {
                    temp -= (i.second[idx - 1] - i.second[idx - 2]);
                    temp += (i.second[idx] - i.second[idx - 2]);
                    ans = min(ans, temp);
                    temp -= (i.second[idx] - i.second[idx - 2]);
                    idx--;
                    temp += (i.second[idx + 1] - i.second[idx]);
                    ans = min(ans, temp);
                    idx--;
                }
            }
        }
        cout << ans / k << '\n';
    }
    return 0;
}