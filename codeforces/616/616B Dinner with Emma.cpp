/*
    Author    : MishkatIT
    Created   : Saturday 13-07-2024 23:50:38
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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        int mn = inf;
        for (int j = 0;j < m; j++) {
            mn = min(mn, v[i][j]);
        }
        temp.push_back(mn);
    }
    cout << *max_element(temp.begin(), temp.end()) << '\n';
    return 0;
}