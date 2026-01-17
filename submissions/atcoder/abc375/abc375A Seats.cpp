/*
    Author    : MishkatIT
    Created   : Saturday 12-10-2024 18:00:50
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

    int n; cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        ans += (str[i] == str[i + 2] && str[i] == '#' && str[i + 1] != '#');
    }
    cout << ans << '\n';

    return 0;
}