/*
    Author    : MishkatIT
    Created   : Tuesday 02-07-2024 21:27:30
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> f(26);
    for (auto& i : str) {
        f[i - 'A']++;
    }
    int ans = inf;
    for (int i = 0; i < k; i++) {
        ans = min(ans, f[i]);
    }
    cout << ans * k << '\n';
    return 0;   
}