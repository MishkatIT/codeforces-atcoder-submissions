/*
    Author    : MishkatIT
    Created   : Saturday 14-12-2024 18:15:39
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<pair<int, string>> ans;
    for (int i = 1; i < (1 << n); i++) {
        string temp;
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if ((1 << j) & i) {
                temp += char('A' + j);
                sum += v[j];
            }
        }
        ans.push_back({sum, temp});
    }
    auto cmp= [&](auto& a, auto& b) {
        return (a.first > b.first || ((a.first == b.first) && (a.second < b.second)));
    };
    sort(ans.begin(), ans.end(), cmp);
    for (auto& i : ans) {
        cout << i.second << '\n';
    }
    return 0;
}