/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 18:04:44
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

    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    pair<int, int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            cin >> x;
            if (arr[i][j] != x) {
                ans = {i + 1, j + 1};
            }
        }
    }
    cout << ans.first << ' ' << ans.second << '\n';
    return 0;
}